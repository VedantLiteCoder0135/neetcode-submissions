class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int l=0,tot=0,ans=INT_MAX;
        for(int r=0;r<nums.size();r++)
        {
            tot += nums[r];
            while(tot >= target)
            {
                ans = min(ans, r-l+1);
                tot -= nums[l];
                l++;
            }
        }
        return ans == INT_MAX ? 0 : ans;
    }
};