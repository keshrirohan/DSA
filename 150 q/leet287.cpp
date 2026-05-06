class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        set<int> mp;
        for(int num:nums){

            if(mp.find(num)!=mp.end()){
                return num;
            }
            mp.insert(num);
        }
        
        return -1;
    }
};