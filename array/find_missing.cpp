#include <iostream>
#include <vector>
using namespace std;


int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int total=0;
        int arrsum=0;
        for(int i=0;i<=n;i++){
            total+=i;
            
        }
        for(int i=0;i<n;i++){
            arrsum+=nums[i];
        }
        cout<<total<<" "<<arrsum<<" "<<endl;
        return total-arrsum;
       

    }


    int main(){
vector<int> nums = {0,1};
 cout <<"missing number is "<< missingNumber(nums) << endl; 
 return 0;
    }