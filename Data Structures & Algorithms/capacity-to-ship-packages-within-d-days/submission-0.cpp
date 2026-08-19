class Solution {
public:
    int needed(vector<int>& weights, int capa)
    {
        int days=1;
        int curr=0;
        for(int w : weights)
        {
            if(curr+w > capa)
            {
                days++;
                curr=w;
            }
            else
            {
                curr += w;
            }
        }
        return days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int maxi = 0,sum = 0;
        for(int x : weights)
        {
            maxi = max(maxi, x);
            sum += x;
        }
        int low=maxi,high=sum;
        while(low<high)
        {
            int mid = (low+high)/2;
            int need = needed(weights, mid);
            if(need <= days)
            {
                high = mid;
            }
            else
            {
                low = mid+1;
            }
        }
        return low;
    }
};