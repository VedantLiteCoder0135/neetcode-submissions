class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int ans=0,preSum=0;
        unordered_map<int, int> mpp;
        mpp[0] = 1;
        for(int num : nums)
        {
            preSum += num;
            int diff = preSum-k;
            if(mpp.find(diff)!=mpp.end())
            {
                ans+= mpp[diff];
            }
            mpp[preSum]++;
        }
        return ans;
    }
};