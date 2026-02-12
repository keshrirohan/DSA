#include<iostream>
#include<vector>
#include<cmath>
#include <algorithm>
using namespace std;


 
 
 void  permu(vector<int> &nums,vector<int> &ans,vector<vector<int>> &finalans){
       
        int n= nums.size();
        if(ans.size()>=n){
            finalans.push_back(ans);
            for(int x:ans){
                cout<<x<<" ";
            }
            cout<<endl;
            return;
        }

       for(int i:nums){
        if(find(ans.begin(), ans.end(), i) != ans.end()){
            continue;
        }
        ans.push_back(i);
        permu(nums,ans,finalans);
        ans.pop_back();
       }



    }

    vector<vector<int>> permute(vector<int>& nums) {
        
        vector<vector<int>> finalans;
        vector<int> ans;
        int i=0;
        cout<<"ya"<<endl;
        permu(nums,ans,finalans);
        return finalans;
    }

    int main(){
        vector<int> nums={1,2,3};
        cout<<"yess"<<endl;
        permute(nums);

    }