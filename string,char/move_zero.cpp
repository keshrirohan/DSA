#include <iostream>
#include <vector>   
using namespace std;

    void moveZeroes(vector<int>& nums) {
        int z = 0, nz = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[z] != 0 && nz < nums.size() - 1 && z < nums.size() - 1) {
                z++;
            }
            if (nums[nz] == 0 && nz < nums.size() - 1 && z < nums.size() - 1) {
                nz++;
            }
            if (nums[nz] != 0 && nz < nums.size() && z < nums.size() &&
                z < nz) {
                swap(nums[nz], nums[z]);
            } 
            else if(nz < nums.size() - 1 && z < nums.size() - 1){
                nz++;
            }
        }
        
    }

    int main(){
        vector<int> nums={0,1,0,3,12};
        moveZeroes(nums);
        for(int i:nums){
            cout<< i
            <<"  ";
        }
    }