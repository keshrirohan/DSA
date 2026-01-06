#include<iostream>
#include<vector>
using namespace std;

vector<int> rotate(vector<int>& nums, int k) {
    int n=nums.size();
    vector<int>result(n);
    for (int i=0;i<n;i++) {
        result[(i+k)%n] =nums[i];
        for (int j:result) {
            cout<<j<<" ";
        }
        cout<<"-------->"<< i <<endl;
    }
    cout<<endl;
    return result;
}


int main(){
    vector<int> nums={1,2,3,4,5,6,7};    int k=3;
    vector<int> rotated = rotate(nums, k);
    for(int num : rotated) {
        cout << num << " ";
    }
    cout << endl;
}