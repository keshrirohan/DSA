// tried my best 
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int maxval=INT_MIN;
        int maxid=0;
        set<int> val(nums.begin(),nums.end());
        for(auto i:val){
            if(i>maxval){
                maxval=i;
            
            }
        }
        cout<<maxval;
        val.erase(maxval);
        maxval=INT_MIN;
        for(auto i:val){
            if(i>maxval){
                maxval=i;
            }
        }
        return maxval;
    }
};