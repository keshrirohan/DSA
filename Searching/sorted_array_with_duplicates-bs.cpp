#include <bits/stdc++.h>
using namespace std;


int binarySearchLowerBound(vector<int> &arr,int target){
    int n=arr.size();
    int LB;
    int s=0,e=n-1;

    while(s<=e){
        int mid=s+(e-s)/2;
        if(arr[mid]==target){
            LB=mid;
            e=mid-1;
        }else if(arr[mid]>target){
            e=mid-1;
        }else{
            s=mid+1;
        }
        
    }
    return LB;

}

int binarySearchUpperBound(vector<int> &arr,int target){
    int n=arr.size(), s=0,e=n-1,mid,UB;

    while(s<=e){
        mid=s+(e-s)/2;
        if(arr[mid]==target){
            UB=mid;
            s=mid+1;
        }else if(arr[mid]>target){
            e=mid-1;


        }
        else{
            s=mid+1;
        }
    }
    return UB;

}



int main(){
    vector<int> arr = {1,1,1,1,1 , 2, 2,2,2,2,2,2,2,2, 3, 4, 5};
int target = 2;



cout<< "LB is "<<binarySearchLowerBound(arr,target)<<endl;
cout<< "LB is "<<binarySearchUpperBound(arr,target)<<endl;
cout<< "the no of frequency is " << binarySearchUpperBound(arr,target)- binarySearchLowerBound(arr,target)+1;
}