#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;


vector<int> twoSum(vector<int> &nums, int target) {
    unordered_map<int, int> mp;
    vector<int> result;
    for (int i = 0; i < nums.size(); i++) {
        
        cout<< "i: " << i << " nums[i]: " << nums[i] << endl;
    



        if (mp.find(target - nums[i]) != mp.end()) {
           
          result.push_back(mp[target - nums[i]]);
          result.push_back(i);
          cout<< "Found indices: " << mp[target - nums[i]] << ", " << i << endl;
          break;
          
        }
        mp.insert({nums[i], i});
    }
    return result;
}




int main(){
        vector<int> arr = {3, 2, 4};
        for (int i: twoSum(arr, 6)) {
            cout << i << " ";
        }
        return 0;
    }
