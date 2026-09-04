#include <bits/stdc++.h>
using namespace std;

int main(){


    vector<int> arr={1,3,5,2,1,5,67,8,10};
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr.size()-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }


    for(auto i:arr){
        cout<<i<<" ";
    }
    cout<<endl;
}


// Time Complexity: O(n²)
//  Space Complexity: O(1)