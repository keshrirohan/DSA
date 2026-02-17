#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void calc(int idx,vector<string> &ans,string &output,int n,int open,int close){

   if(open==n && close ==n){
    ans.push_back(output);
    return;
   }

   if(open<n){
    
    output.push_back('(');
    calc(idx,ans,output,n,open+1,close);
    output.pop_back();
    
   }

   if(open>close){
    
    output.push_back(')');
    calc(idx,ans,output,n,open,close+1);
     output.pop_back();
   
   }

}

vector<string> generateParenthesis(int n) {
    int idx=0;
    vector<string> ans;
    string output;
    int open=0,close=0;
    
    calc(idx,ans,output,n,open,close);
    return ans;

    }
int main(){
    for(string i:generateParenthesis(2)){
        cout<<i<<endl;
    }
}