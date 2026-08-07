class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, int> mpp;
        for(int x : nums)
        {
            mpp[x]++;
        }
        for(int x : nums)
        {
            if(mpp[x]>1)
            {
                return true;
            }
        }
        return false;
    }
};