class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        vector<int> ans(temp.size(),0);
        stack<pair<int, int>> st;
        for(int i=0;i<temp.size();i++)
        {
            int t=temp[i];
            while(!st.empty() && t>st.top().first)
            {
                auto it = st.top();
                st.pop();
                ans[it.second] = i-it.second;
            }
            st.push({t,i});
        }
        return ans;
    }
};
