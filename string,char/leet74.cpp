#include<iostream>
#include<vector>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int s = 0;
    int row = matrix.size();
    int col = matrix[0].size();
    int e = (row * col)-1, mid, i, j;
    while (s <= e) {
        mid = s + (e - s) / 2;
        i = mid / col;
        j = mid % col;
        j = j<=0 ? 0 : j;
        cout<<"i and j "<<i<<" "<<j<<endl;
        cout<<matrix[i][j]<<endl;
        if (matrix[i][j] == target) {
            return 1;
        } else if (matrix[i][j] < target) {
            s = mid ;
        } else {
            e = mid;
        }
    }
    return false;
}


int main() {
    vector<vector<int>> matrix;
    matrix ={{1,2},{3,4}};
    if (searchMatrix(matrix, 1)) {
        cout<<"Found"<<endl;
    }
    else {
        cout<<"Not Found"<<endl;
    }
}