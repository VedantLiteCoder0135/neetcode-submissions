class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0,r=0;
        int maxL=0;
        unordered_set<char> charSet;
        while(r<s.length())
        {
            while(charSet.find(s[r]) != charSet.end())
            {
                charSet.erase(s[l]);
                l++;
            }
            charSet.insert(s[r]);
            maxL = max(maxL, r-l+1);
            r++;
        }
        return maxL;
    }
};
