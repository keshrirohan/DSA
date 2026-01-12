#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
       map<int,int> mp;
       vector<int> ans;
       int row = grid.size();
       int col = grid[0].size();
       int total =row*col;
       int totalsum= (total*(total+1))/2;
       int gridsum=0;
       for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            mp[grid[i][j]]++;
            cout<< "grid[i][j]: " << grid[i][j] << endl;
            gridsum+=grid[i][j];
        }
       }
       for(int i=1;i<=total;i++){
        if(mp[i]==2){
            gridsum-=i;
            ans.push_back(i);
        }
       }
         ans.push_back(totalsum - gridsum);


       
       
       return ans;
       
    }

    int main(){

        vector<vector<int>> grid = {{1,2,2},{3,4,5},{6,7,8}};
        vector<int> result = findMissingAndRepeatedValues(grid);
        cout << "Repeated: " << result[0] << ", Missing: " << result[1] << endl;
        return 0;
    }
