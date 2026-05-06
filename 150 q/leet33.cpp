class Solution {
public:
    int bs(vector<int>& nums, int target) {
        int s = 0;
        int e = nums.size() - 1;
        int mid;
        
        while (s <= e) {
            mid=s+(e-s)/2;
            if (nums[mid] == target) {
                return nums[mid];
            } else if (nums[mid]<target){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
        return -1;
    }

    int search(vector<int>& nums, int target) {
        int pivot = 0;
        vector<int> cpy=nums;
        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] > nums[i + 1]) {
                pivot = i + 1;
            }
        }

        reverse(nums.begin(), nums.begin() + pivot);

        reverse(nums.begin() + pivot, nums.end());
        reverse(nums.begin(), nums.end());
        auto bsv= bs(nums,target);
        if(bsv==-1) return -1;
        return find(cpy.begin(),cpy.end(),bsv)-cpy.begin();
    }
};