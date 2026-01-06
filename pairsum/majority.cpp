#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int main(){
    cout<<"programmer"<<endl;
    int arr[]={
        5,3,6,23,5,6,32,5,5,6,67,4,33,5,43,4,45,5,5,5,5,5,5,5,5,5,5,5
    };
    int n=sizeof(arr)/sizeof(arr[0]);
    int count=0;
    int value= floor(n/2);
    for(int i=0;i<n;i++){
        count=0; 
        for(int j=0;j<n;j++){
            if(arr[j]==arr[i]){
                count++;
               
            }
        }
        if(count > value){
            cout<<"majority is "<<arr[i]<<endl;
            break;
        }
    }
    return 0;
}

