#include<iostream>
#include<vector>
using namespace std;



bool issorted( vector<int> &arr,int n){

    if(n<2){
        return true;
    }
    
    cout<<"arr[n-2] < arr[n-1] "<< arr[n-2] <<" "<< arr[n-1]<<endl;
   if(arr[n-2] < arr[n-1] && issorted(arr,n-1) ){
   
    return true;
   }
   return false;

   


}


int main(){
    vector<int> arr={3,4,8,6,7};
    cout<<issorted(arr,5);
}