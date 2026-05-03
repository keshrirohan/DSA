
//Q is leet 15 is 3sum
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


//2nd approach which worked

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        vector<vector<int>> ans;
        int j, k;
        for (int i = 0; i < n - 2; i++) {
            j = i + 1;
            if ( i >  0 && nums[i] == nums[i - 1] ) {
                continue;
            }

            k = n - 1;
            while (j < k) {

                if (nums[j] + nums[k] == -nums[i]) {
                    ans.push_back({nums[i], nums[j], nums[k]});
                    j++;
                    k--;
                    while(j<k && nums[j]==nums[j-1] ){
                        j++;
                    }

                }

                else if (nums[j] + nums[k] > (-nums[i])) {
                    k--;
                } else {
                    j++;
                }
            }
        }
        return ans;
    }
};