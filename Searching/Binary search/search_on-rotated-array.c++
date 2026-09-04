#include <bits/stdc++.h>
using namespace std;

print(vector<int> &arr){
    for(auto i :arr){
        cout<< i<<" ";
    }
    cout<<endl;
}




void rotateArray(vector<int> &arr){
    int i=0;
    while(arr[i]<arr[i+1]){
        i++;
    }
    
    int division=i+1;

    reverse(arr.begin(),arr.begin()+division);

    print(arr);
    reverse(arr.begin()+division,arr.end());
     print(arr);
   
     reverse(arr.begin(),arr.end());
print(arr);   
}

int binarysearch(vector<int> &arr,int target){
    int s=0,e=arr.size()-1;
    int mid;
    while(s<=e){
        mid=s+(e-s)/2;
        if(arr[mid]==target){
            return mid;
        }
        else if( arr[mid]>target){
            e=mid-1;

        }
        else{
            s=mid+1;
        }


    }
    return -1;
}





int main(){
  vector<int>  arr = {4, 5, 6, 7, 0, 1, 2};
int target = 0;  


rotateArray(arr);
cout<<binarysearch(arr,target);
}