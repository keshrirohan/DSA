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

//approach 2 
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        int size = m * n;
        int l = 0;
        int t = 0;
        set<int> row;
        set<int> col;
        cout<<m<<n<<"size";
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (matrix[i][j] == 0) {
                    row.insert(i);
                    col.insert(j);
                }
            }
        }

   
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
    
              if( matrix[i][j] == 0 ||
                        row.find(i) !=row.end()  ||
                        col.find(j) !=col.end()) {
                    cout << i << j << endl;
                    matrix[i][j] = 0;
                
                }
            }
        }
    }
};