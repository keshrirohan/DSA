// Q is leet 26 is Remove Duplicates from Sorted Array
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> s(nums.begin(),nums.end());
        nums.clear(); 
        for(auto val:s){  
            nums.push_back(val);
        }
        return s.size();
    }
};
 