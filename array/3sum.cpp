#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;



vector<vector<int>> threeSum(vector<int>& nums) {
    int l,r;
    sort(nums.begin(),nums.end());
    r=nums.size()-1;
    vector<vector<int>> ans;

    for(int i=0;i<nums.size();i++){
        l=i+1;
        r=nums.size()-1;
        while(l<r){
            if(nums[l]+nums[r]==(-nums[i])){
                
                ans.push_back({nums[i],nums[l],nums[r]});
                l++;
                r--;
            }
            else if(nums[l]+nums[r]>(-nums[i])){
                r--;
            }
            else if(nums[l]+nums[r]<(-nums[i])){
                l++;
            }
        }
    }
    return ans;
}    


int main(){
        vector<int> arr={-100,-70,-60,110,120,130,160};
        vector<int> nums={-1,0,1,2,-1,-4};
        for(vector<int> i : threeSum(arr)){
            for(int j:i){
                cout<<j<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
        cout<<endl;
        cout<<endl;
        cout<<endl;


        for(vector<int> i : threeSum(nums)){
            for(int j:i){
                cout<<j<<" ";
            }
            cout<<endl;
        }

        
       
}