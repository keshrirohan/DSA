#include<iostream>
#include<vector>
#include<cmath>

using namespace std;
int main(){
    int arr[]={
        0,0,1,1,1,1,1,1,1,1,1,1,1,12,2,3,
    };
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<size<<endl;
    int value = floor(size/2);
    int count =0;
    int start =arr[0];
    for(int i=1;i<size;i++){
        if(start==arr[i]){
            count++;

        }
        else{
            count =0;
            start=arr[i];

        }
        if(count > value){
            cout<<arr[i];
            break;
        }
        
    }
    

    
}