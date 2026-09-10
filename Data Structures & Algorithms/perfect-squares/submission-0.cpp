class Solution {
public:
    int numSquares(int n) {
        vector<int> dp(n+1, n);
        dp[0] = 0;
        for(int tar=1;tar<=n;tar++)
        {
            for(int s=1; s*s<=tar; s++)
            {
                dp[tar] = min(dp[tar], 1+dp[tar - s*s]);
            }
        }
        return dp[n];
    }
};