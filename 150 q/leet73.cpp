// trying to solve but i will continue tomorrow
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int i, j;
        bool isfound = false;
        pair<int ,int> zeros;

        for (i = 0; i < matrix.size(); i++) {
            for (j = 0; j < matrix[i].size(); j++) {

                if (matrix[i][j] == 0) {
                    zero.insert(i,j);
                    isfound = true;
                
                }
            }

            
        }
        for (int k = 0; k < matrix.size(); k++) {
            for (int l = 0; l < matrix[i].size(); l++) {
                if(k==i || l==j){
                    matrix[k][l]=0;
                }
            }
        }
    }
};