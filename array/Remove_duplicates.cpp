#include<iostream>
#include<vector>
using namespace std;

void printarr(vector<int> arr){
    int j=0;
    for(int i:arr){
        cout<<"the value in "<<j<<" is " <<i<<endl;
        j++;
    }
    cout<<"the iteration is finished"<<endl;

}


int removeDuplicates(vector<int>& nums) {
        int count =0;
        int j=0;
        int n=nums.size();
        for(int i=1;i<n;i++){
            if(nums[i]==nums[j]){
                nums.erase(nums.begin()+i);
                printarr(nums);
                count++;
            }
            else{
                j++;
            }

        }
       return count;
    }
int main(){
    vector<int> arr={1,1,2};
    cout<<"the count is "<<removeDuplicates(arr)<<endl;

}