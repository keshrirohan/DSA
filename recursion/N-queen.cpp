#include<iostream>
#include<vector>
using namespace std;

void solve(int n,vector<vector<char>> &output, int row ){

    if(row>=n){
        return;

    }
    
    for(int i=0;i<=n;i++){
        prinf("row is %d and i is %d :- ",row,i);
        output[row][i]='Q';
    }

    



}

vector<vector<char>> queen(int n){

    vector<vector<char>> output;
    int row=0;
    cout<<"calling";
    solve(n,output,row);
    return output;
}

int main(){
    int n=4;
    queen(n);
    


}