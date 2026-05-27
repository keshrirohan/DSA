// 125. Valid Palindrome
// Given a string s, determine if it is a palindrome, considering only alphanumeric characters and ignoring cases.
class Solution {
public:
    bool isPalindrome(string s) {
        string t; 
        string rev;
        for(auto i:s){
            if(isalnum(i) ){
            t.push_back(tolower(i));
              
            }
        }
        int size=t.size();
        for(int i=size-1;i>=0;i-- ){
            rev.push_back(t[i]);
            
        }
        
        
        return rev==t;
    }
};