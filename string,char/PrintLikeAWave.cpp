#include<iostream>
#include<vector>
using namespace std;

vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    int total=nRows*mCols;
    int row=0,col=0;
    vector<int> ans;
    int turning=1;

    cout<<nRows<<" "<<mCols<<endl;
    for (int i=0;i<total;i++) {
        cout<<"pushed row and col "<< row <<" " << col<<endl;;
        ans.push_back(arr[row][col]);
        if (turning%2==1) {
            if (row<nRows-1) {
                row++;
            }
            else{
                col++;
                turning++;
            }
        }else if (turning%2==0) {
            if (row>0) {
                row--;
            }else {
                col++;
                turning++;
            }
        }
    }
    return  ans;

}

int main() {
    vector<vector<int>> arr={{ 1, 2, 3, 4},
                             { 5, 6, 7, 8},
                             { 9,10,11,12}};
    for (int i:wavePrint(arr,3,4))
        cout<<i<<" ";
}
