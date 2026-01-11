#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;



    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int,int>> val;
        for(int i=0;i<nums.size();i++){
            val.push_back({nums[i],i});
        }
        int s = 0, e = nums.size() - 1, sum;
        sort(val.begin(), val.end());
        vector<int> ans;
        while (s < e) {
            sum = val[s].first + val[e].first ;
            if (sum == target) {
                return { val[s].second,val[e].second};

            } else if (sum < target) {
                s++;
            } else {
                e--;
            }
        }
        return {-1};
    }

int main() {
    vector<int> arr = {3,2,4};
    for (int i:twoSum(arr, 6)) {
        cout<< i <<" ";
    }

    return 0;}