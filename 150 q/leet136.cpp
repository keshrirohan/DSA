class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int,int> mp;
        for(int v:nums){
            mp[v]++;
        }
        for(auto x:mp){
            if(x.second<2){
                return x.first;
            }
        }
        return -1;
    }
};