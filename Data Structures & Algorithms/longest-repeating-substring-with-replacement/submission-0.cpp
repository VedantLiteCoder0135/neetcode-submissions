class Solution {
public:
    int characterReplacement(string s, int k) {
        int ans=0;
        unordered_map<char, int> freq;
        int l=0,r=0,maxf=0;
        while(r<s.size())
        {
            freq[s[r]]++;
            maxf = max(maxf, freq[s[r]]);
            while((r-l+1)-maxf > k)
            {
                freq[s[l]]--;
                l++;
            }
            ans = max(ans, r-l+1);
            r++;
        }
        return ans;
    }
};
