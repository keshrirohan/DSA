#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr = {1, 3, 5, 7, 9, 11};
    int target = 7;


    int i=0;
    int j=arr.size()-1;
    int mid;
    
    while(i<=j){
        mid=(i+j)/2;  //      i+(j-i)/2
        cout<<mid<<" "<<endl;
        if(arr[mid]==target){
            cout<< "found";
            return 0;
        }
        else if(arr[mid]>target){
             j=mid-1;
        }
        else{
           
             i=mid+1;
        }


    }
    cout<<"not found ";


}