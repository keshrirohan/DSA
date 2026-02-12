#include<iostream>
#include<vector>

using namespace std;

bool binary(vector<int> &arr,int s,int e, int target){
  int mid=s + (e - s) / 2;

  if(s>e){
    return false;
  }
  else if(arr[mid]==target){
    cout<<"start--------"<<arr[s]<<" mid ---"<<arr[mid]<<" end ------"<<arr[e]<< " target--------" <<target<<endl;
    return true;
   }
   else if(arr[mid]<target){
  cout<<"start--------"<<arr[s]<<" mid ---"<<arr[mid]<<" end ------"<<arr[e]<< " target--------" <<target<<endl;
    return binary(arr,mid+1,e,target);
   }
   else if(arr[mid]>target){
   cout<<"start--------"<<arr[s]<<" mid ---"<<arr[mid]<<" end ------"<<arr[e]<< " target--------" <<target<<endl;
    return binary(arr,s,mid-1,target);
   
   }

    
   
}

int main(){
    vector<int> arr={1,2,3,4,5,6,7,8,10};
    int target=20;
    int s=0,e=arr.size()-1;
    
    cout<<binary(arr,s,e,target);
}