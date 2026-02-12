#include<iostream>
#include<vector>
using namespace std;

// void subsets(vector<int> &arr, vector<int> &ans ,int i){
//     int n=arr.size();
   
//    if(i>=n){
//    for(int j:ans){
//     cout<<j <<" ";
//    }
//    cout<<endl;
//    return;
//    }
//    ans.push_back(arr[i]); 
//    subsets(arr,ans,i+1);  
//    ans.pop_back(); 
//    subsets(arr,ans,i+1);
// }







    void subs(vector<int> &nums,vector<int> &ans,int i,vector<vector<int>> &finalans){
        int n=nums.size();

        cout<<"second fsn"<<endl;
        if(i>=n){
             finalans.push_back(ans);
             return;
        }
        ans.push_back(nums[i]);
        subs(nums,ans,i+1,finalans);
        ans.pop_back();
        subs(nums,ans,i+1,finalans);
    }



    vector<vector<int>> subsets(vector<int>& nums) {
    int i=0;
    vector<int> ans;
    cout<<"first fn "<<endl;
    vector<vector<int>> finalans;
    subs(nums,ans,i,finalans);
    
    return finalans;
    }

int main(){
    vector<int> nums={1,2,3} ,ans;
    cout<<"good to go "<<endl;
    
   for(vector<int> i:subsets(nums)){
    for(int x:i){
        cout<<x<<" ";
    }
    cout<<endl;
    
   }
  
}
    
