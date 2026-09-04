#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr={1,4,2,5,3,7,1,400,78,12,33,213};
    int temp;
    for( int i=0;i<arr.size();i++){
       int v=i;
        for(int j=i;j<arr.size();j++){
            
            if(arr[v]>arr[j]){
                v=j;
            }

        }
        swap(arr[v],arr[i]);

    }


    for(int i:arr){
        cout<<i<<" ";
    }
}


// Time: O(n²)
// Space: O(1) 

