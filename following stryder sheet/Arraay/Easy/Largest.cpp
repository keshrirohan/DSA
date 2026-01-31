/*Given an array of integers nums, return the value of the largest element in the array


Example 1

Input: nums = [3, 3, 6, 1]

Output: 6

Explanation: The largest element in array is 6

Example 2

Input: nums = [3, 3, 0, 99, -40]

Output: 99

Explanation: The largest element in array is 99*/


#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int largest(vector<int> &arr){
    int n=arr.size();
    int maxval = INT_MIN;
    for(int i=0;i<n;i++){
        maxval= max(arr[i],maxval);
    }
    return maxval;
}

int main(){
    vector<int> arr={3, 3, 0, 99, -40};
    cout<<largest(arr);
}