#include<iostream>
#include<vector>
#include<algorithm> 
using namespace std;

int pivotIndex(vector<int>& nums) {
        int left = 0;
        int right = 0;
        int total = 0;
        for (int i = 0; i < nums.size(); i++) {
            total += nums[i];
        }
        right = total;
        cout<< "total amount :- "<< total<<endl;

        for (int i = 0; i < nums.size(); i++) {
            if (i == 0) {
                left = 0;
            } else {
                left += left + nums[i - 1];
            }
            cout <<"        "<<i<<endl;
            cout<<left<<"----left";
            cout<<"-----"<<nums[i]<<"-----";
            right -= nums[i];
            cout<<"right------"<<right<<endl;
            if (left == right)
                return i;
        }
        return -1;}

    int main(){
vector<int> nums = {4,1,2,3,7};
 cout <<"index is "<< pivotIndex(nums) << endl; 
 return 0;
    }