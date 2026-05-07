class Solution {
public:
    int findMin(vector<int>& nums) {
        int pivot=0;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]>nums[i+1]){
                pivot=i+1;
            }
        }
        // cout<<nums[pivot];
        return nums[pivot];
    }
};

// optimal approach using log n time complexity
class Solution {
public:
    int findMin(vector<int>& nums) {
        int s = 0, e = nums.size() - 1, mid = nums[s];
       
        
        while (s < e) {
            mid=s+(e-s)/2;
            if(nums[mid]>nums[e]){
                s=mid+1;
            }else{
                e=mid;
            }
                    }
        return nums[s];
    }
};