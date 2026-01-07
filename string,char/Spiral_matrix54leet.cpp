#include<iostream>
#include<vector>

using namespace std;



vector<int> spiralOrder(vector<vector<int>>& matrix) {
    int row=matrix.size();
    int col=matrix[0].size();
    int firstrow=0;//
    int lastcol=col-1;//3
    int lastrow=row-1;//3
    int firstcol=0;
    int total=row*col;//9
    vector<int> ans;

    while(total!=0){

        for(int i=firstcol;i<=lastcol && total!=0;i++){
            ans.push_back(matrix[firstrow][i]);
            total--;//8 7 6
        }
        firstrow++;


        for(int i=firstrow;i<=lastrow && total!=0;i++){
            ans.push_back(matrix[i][lastcol]);
            total--;
        }
        lastcol--;

        for(int i=lastcol;i>=firstcol && total!=0;i--){
            ans.push_back(matrix[lastrow][i]);
            total--;
        }
        lastrow--;

        for(int i=lastrow;i>=firstrow && total!=0;i--){
            cout<< lastrow<<" "<<i<<endl;
            ans.push_back(matrix[i][firstcol]);
            total--;
        }
        firstcol++;
    }
    return ans;



}




int main() {
    vector<vector<int> > arr;
    arr = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16},{17,18,19,20},{21,22,23,24}};
    for (int i: spiralOrder(arr)) {
        cout << i << "  ";
    }
}
