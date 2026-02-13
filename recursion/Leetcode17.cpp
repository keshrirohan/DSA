#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

void calculateletter(vector<string> &ans  , vector<string> &mapping , string digits, string output,int idx){
    if(idx>=digits.size()){
         ans.push_back(output);
        
        return;
    }
        int number = digits[idx];
        string s=mapping[number-'0'];
     


        for(int i=0;i<s.size();i++){
            output.push_back(s[i]);
            calculateletter(ans,mapping,digits,output,idx+1);
            output.pop_back();
        }
    }
   
     



vector<string> letterCombinations( string digits) {

    vector<string> mapping = {
        "", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"
    };
    vector<string> ans;
    
    
    int idx=0;
    string output;
    
    calculateletter(ans,mapping,digits,output,idx);
    return ans;

    
}

int main(){

    string digits = "23";

    for( string i:letterCombinations(digits) ){
        cout<< i <<" ";
    };
    return 0;
    
}