#include<iostream>
#include<vector>
using namespace std;



//subarray sum equal to k 
/*              Given an array of integers nums and an integer k, 
                return the total number of subarrays whose sum equals to k.
                A subarray is a contiguous non-empty sequence of elements within an array.
*/

int bruteforce(vector<int>& nums, int k) {
    int count=0,sum;
        for (int i=0;i<nums.size();i++){
            sum=0;
            for(int j=i;j<nums.size();j++){
               sum+=nums[j];
               if(sum==k){
                count++;
               }
            }
        }
    return count;
}

int subarraySum(vector<int>& nums, int k) {
    int count=0,sum=0;
            for(int i=0;i<nums.size();i++){
                sum+=nums[i];
                cout<< "sum : "<< sum<<endl;
                if(sum==k){
                    sum=0;
                    count++;
                }
            }

            return count;
    }


        int main(){
            vector<int> nums={1,2,3,4,5};
            int k=5;
            cout<<subarraySum(nums,k)<<endl;
        }