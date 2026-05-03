// perfect approach 
//Q is leet 54 is Spiral Matrix
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        int top = 0;
        int left = 0;
        int right = n - 1;
        int bottom = m - 1;
        int i;
        int it = 0;
        int size = m * n;
        vector<int> ans;
        while (it < size) {
            cout<<it;
            for (i = left; it < size && i <= right; i++) {
                ans.push_back(matrix[top][i]);
                it++;
                
            }
            top++;

            for (i = top; it < size && i <= bottom; i++) {
                ans.push_back(matrix[i][right]);
                it++;
           }
            right--;

            for (i = right; it < size && i >= left; i--) {
                ans.push_back(matrix[bottom][i]);
                it++;
            }
            bottom--;

            for (i = bottom; it < size && i >= top; i--) {
                ans.push_back(matrix[i][left]);
                it++;
            }
            left++;
        }
        return ans;
    }
};