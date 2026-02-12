#include<iostream>
#include<vector>
using  namespace std;

void subset(vector<int> &arr,vector<int> &ans, int i,vector<vector<int>> &finalans){
    int n= arr.size();
    
    if(i>=n){
        finalans.push_back(ans);
        return;
    }
    ans.push_back(arr[i]);
    subset(arr,ans,i+1,finalans);
        ans.pop_back();
    subset(arr,ans,i+1,finalans);
    
}

int main(){
    vector<int> arr={1,2,2};
    int i=0;
    vector<int> ans;
    vector<vector<int>> finalans;
    subset(arr,ans,i,finalans);

    for(int i=1;i<finalans.size();i++){
        if(finalans[i-1]==finalans[i]){
            continue;
        }
        for(int j=0;j<finalans.size();j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}