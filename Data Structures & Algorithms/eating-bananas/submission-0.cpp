class Solution {
public:
    int calculate(vector<int>& piles, int speed)
    {
        int ans = 0;
        for(int x : piles)
        {
            ans += ceil((double)x/speed);
        }
        return ans;
    }
    int minEatingSpeed(vector<int>& piles, int hours) {
        int low=1;
        int high = *max_element(piles.begin(),piles.end());
        int ans = high;
        while(low<=high)
        {
            int mid = (low+high)/2;
            int totalH = calculate(piles, mid);
           if(totalH <= hours)
            {
                ans = mid;
                high = mid-1;
            }
            else
            {
                low = mid+1;
            }
        }
        return ans;
    }
};
