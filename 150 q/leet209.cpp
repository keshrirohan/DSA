class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int l = 0, r = 0;
        int sum = 0;
        int minval = INT_MAX;
        while (r < nums.size()) {
              sum += nums[r];

            while (sum >= target) {

                minval = min(r - l+1, minval);
                sum -= nums[l];
                l++;
                
            }
                r++;
        }
        
            
         return (minval == INT_MAX) ? 0 : minval;
        
    }
};