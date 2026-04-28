//approach 1
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> num;
    
        for(int v:nums){
            if(!num.insert(v).second){
                
                 return true;}
        }
        return false;
    }
};


//approach 2
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(auto num:nums){
            mp[num]++;
        }
        for(auto m:mp){
            if(m.second>1){
                return true;
            }
        }
        return false;
    }
};