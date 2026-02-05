#include<iostream>
using namespace std;
bool issorted(int &arr,int n){
    return (arr[n-1]>arr[n-2]) && issorted(arr,n-1);
}


int main(){
    int arr={3,4,5,6,7};

    issorted(arr,n);
}