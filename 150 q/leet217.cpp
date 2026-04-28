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