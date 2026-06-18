// brute force approach 
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxval=INT_MIN;
        int product=1;
        for(int i=0;i<nums.size();i++){
            product=1;
            for(int j=i;j<nums.size();j++){
                product *=nums[j];
                maxval=max(product,maxval); 
            }
        }
        return maxval;
        
    }
};


// optimal solution