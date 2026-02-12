#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

    void findcombination(vector<int>& candidates, int target,vector<int> &ans, vector<vector<int>> &result,int sum,int idx){
        if(sum>target){
            return;
        }
        if(sum==target){
            result.push_back(ans);
            return;
        }
        for(int i=idx;i<candidates.size();i++){
           

            sum+=candidates[i];
            ans.push_back(candidates[i]);
            
            findcombination(candidates,target,ans,result,sum,idx);
            int val=ans[ans.size()-1];
            cout<<"val is "<<val<<endl;
            ans.pop_back();
            idx++;
            sum-=val;
            findcombination(candidates,target,ans,result,sum,idx);
           
        }
    }



    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> ans;
        vector<vector<int>> result;
        int sum=0;
        int idx=0;
        findcombination(candidates,target,ans,result,sum,idx);
        return result;
    }



    int main(){
        vector<int> candidates={2,3,5};
        int target=4;
        vector<vector<int>> result=combinationSum(candidates,target);
        for(auto x:result){
            for(int i:x){
                cout<<i<<" ";
            }
            cout<<endl;
        }
    }
