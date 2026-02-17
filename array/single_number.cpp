#include<iostream>
#include<vector>
#include<unordered_map>
#include<map>
using namespace std;
int singleNumber(vector<int>& nums) {
    unordered_map<int,int> pair;
    for(int i=0;i<nums.size();i++){
        pair[nums[i]]++;
      
    }

    int pairSize= pair.size();
    for(auto i:pair){
        if(i.second!=2){
            return i.first;
        }
       
    }

      
}
int main(){
    vector<int> nums = {2,2,1};
    cout << singleNumber(nums)<<endl ;


  
}
