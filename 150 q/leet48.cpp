//using extra space 
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int size=matrix[0].size();
        vector<vector<int>> ans(size,vector<int>(size));
       
    
        for(int i=0;i<size;i++){
            for(int j=0;j<size;j++){
               cout<<i<<"->"<< j<<" "<<endl;
                 ans[j][i+(size-1-2*i)]=matrix[i][j];
            }
           
        }
     
        for(auto i:ans){
            for(auto j :i){
                cout<<j<<" ";
            }
            cout<<endl;
        }

    }
};