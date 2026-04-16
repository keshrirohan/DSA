class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        if(k==0|| k== nums.size()){
            return;
        }
       reverse(nums.begin(),nums.end());
        reverse(nums.begin()+k,nums.end());
        if(nums.size()%2==0){
        reverse(nums.begin(),nums.end()-k);
        }else{
        reverse(nums.begin(),nums.end()-k-1);
          }  }
};