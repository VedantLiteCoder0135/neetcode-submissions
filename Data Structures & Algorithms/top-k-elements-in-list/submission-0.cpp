class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mpp;
        for(int num : nums)
        {
            mpp[num]++;
        }
        vector<pair<int, int>> arr;
        for(auto p : mpp)
        {
            arr.push_back({p.second, p.first});
        }
        sort(arr.rbegin(),arr.rend());
        vector<int> ans;
        for(int i=0;i<k;i++)
        {
            ans.push_back(arr[i].second);
        }
        return ans;
    }
};
