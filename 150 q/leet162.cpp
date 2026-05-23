// optimal approach
class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int s=0,e=nums.size()-1;
        int mid;
        
        int maxval=INT_MIN;
        while(s<e){
            mid=s+(e-s)/2;
            if(nums[mid]<nums[mid+1]){
                s=mid+1;
            }
            else{
                e=mid;
            }
           
        }
        return e;
            }
};


//difficult approach a bit 
class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int s = 0, e = nums.size() - 1;
        int mid;
        while (s < e) {
            mid = s + (e - s) / 2;
            if ((mid == 0 || nums[mid] > nums[mid - 1]) &&
                (mid == nums.size() - 1 || nums[mid] > nums[mid + 1])) {
                return mid;
            } else if (nums[mid] > nums[mid + 1]) {
                e = mid - 1;
            } else {
                s = mid + 1;
            }
        }
        return s;
    }
};