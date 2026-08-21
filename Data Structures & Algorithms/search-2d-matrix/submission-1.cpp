class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int target) {
        int row = mat.size();
        int col = mat[0].size();
        int left = 0, right = row*col-1;
        while(left<=right)
        {
            int mid = left + (right-left)/2;
            int r = mid/col, c = mid%col;
            if(target > mat[r][c])
            {
                left = mid+1;
            }
            else if(target < mat[r][c])
            {
                right = mid-1;
            }
            else
            {
                return true;
            }
        }
        return false;
    }
};
