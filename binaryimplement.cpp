#include<iostream>
using namespace std;
int main(){

    int arr[6] = {1,2,3,4,5,6};
    int t=8;

    int start=0,end=5,mid;
    bool find=false;
    

    
    for(int i=0;i<6;i++){
     mid=(start+end)/2;
        if(t>arr[mid]){
            start=mid;
        }
        else if(t<arr[mid]){
            end=mid;
        }
        else if(t==arr[mid]){
            find=true;
        }
    }

    cout<<find<<endl;
}