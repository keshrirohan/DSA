class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zeroCount = 0, oneCount = 0, twocount = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) {
                zeroCount++;
            } else if (nums[i] == 1) {
                oneCount++;

            } else if (nums[i] == 2) {
                twocount++;
            }
        }
        for (int i = 0; i < zeroCount; i++) {
            nums[i] = 0;
        }
        for (int i = zeroCount; i < oneCount + zeroCount; i++) {
            nums[i] = 1;
        }
        for (int i = oneCount + zeroCount; i < nums.size(); i++) {
            nums[i] = 2;
        }
    }
};