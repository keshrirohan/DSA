#include<iostream>
#include<cmath>

using namespace std;
int main(){
    int arr[]{
        2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 2
    };
    int size = sizeof(arr)/sizeof(arr[0]);
    int count=0;
    int ans;

    for(int i=0;i<size;i++){
        if(count ==0){
            ans=arr[i];
        }
        else if(ans == arr[i]){
            count++;
        }
        else{
            count--;
        }
       
    }
    if(count > size/2){
        cout << ans;
    }
   

    
}