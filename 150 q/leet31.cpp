//tried to code by getting the concept 
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int i=0,j= nums.size()-1,pivot;
        int min=INT_MAX;
        while(i<nums.size()-1){
            while(nums[i]<nums[i+1]){
            cout<<i<<" "<<nums[i]<<endl;
            i++;
            }
            pivot=i-1;
            if(pivot>=nums.size()){
                break;
            }
            cout<<"j and pivot is "<< j <<" and "<< pivot<<" and " <<nums[j]<<endl;

            while(j>=pivot){
                if(nums[j]>nums[pivot]){
                    swap(nums[pivot],nums[j]);
                    break;
                }
                j--;
            }
         
          cout<<"j is "<<j;
          reverse(nums.begin()+i,nums.end());


            i++;
        }
    }
};