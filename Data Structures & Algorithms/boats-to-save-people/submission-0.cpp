class Solution {
public:
    int numRescueBoats(vector<int>& arr, int limit) {
        sort(arr.begin(),arr.end());
        int ans=0,l=0,r=arr.size()-1;
        while(l<=r)
        {
            int rem = limit-arr[r--];
            ans++;
            if(l<=r && rem >= arr[l])
            {
                l++;
            }
        }
        return ans;
    }
};