class Solution {
public:
    int mySqrt(int x) {
        int left=0,right=x;
        int ans=0;
        while(left <= right)
        {
            int mid = left + (right-left)/2;
            if((long long)mid * mid > x)
            {
                right = mid-1;
            }
            else if((long long)mid * mid < x)
            {
                left = mid+1;
                ans = mid;
            }
            else
            {
                return mid;
            }
        }
        return ans;
    }
};