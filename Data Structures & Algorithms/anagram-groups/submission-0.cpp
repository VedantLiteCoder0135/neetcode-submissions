class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        map<vector<int>, vector<string>> mpp;
        for(auto s : strs)
        {
            vector<int> freq(26,0);
            for(char ch : s)
            {
                freq[ch-'a']++;
            }
            mpp[freq].push_back(s);
        }
        for(auto it : mpp)
        {
            ans.push_back(it.second);
        }
        return ans;
    }
};
