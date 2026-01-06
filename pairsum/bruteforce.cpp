#include<iostream>
#include<vector>
using namespace std;

int main(){
    int target;
    vector<int> ans;
    cin>>target;
    int arr[]={2,4,5,7,9,10};
    int n =sizeof(arr)/sizeof(int);
    for (int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            // cout<<"("<<arr[i]<<","<<arr[j]<<") ";
            if(arr[i]+arr[j]== target){
                ans.push_back(arr[i]);
                ans.push_back(arr[j]);
            }
            
        }

    }
    for(int i : ans){
        cout<<i;
    }
    cout<<endl;
}