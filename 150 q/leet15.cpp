
//tried my best to solve 3sum in o(n)
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> final_ans;
        int newval;
        int i = 1, j = nums.size() - 1;
        
        while (i < j) {
            
            newval = -nums[i] - nums[j];
            if (binary_search(nums.begin() + i, nums.begin() + j, newval)) {
                final_ans.push_back({nums[i], newval, nums[j]});
                j--;
            } else if (nums[i-1] == nums[i]) {
                i++;
                continue;
            } else {
                i++;
            }
        }
        return final_ans;
    }
};