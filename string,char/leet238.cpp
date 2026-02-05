#include<iostream>
#include<vector>

using namespace std;

 vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        vector<int> prefix(n,1);
        vector<int> suffix(n,1);
        prefix[0]=1;
        for(int i=1;i<n;i++){
            prefix[i]= prefix[i-1] * nums[i-1];
            cout<<"prefix "<< prefix[i]<<endl;
        }
        for(int i=n-2;i>=0;i--){
            suffix[i]=suffix[i+1]*nums[i+1];
             cout<<"suffix "<< suffix[i]<<endl;
        }
        for(int i=0;i<n;i++){
            ans.push_back(prefix[i]*suffix[i]);
        }
        return ans;
    }



    vector<int> productExceptSelfbrute(vector<int>& nums){
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            int total=1;
            for(int j=0;j<nums.size();j++){
                if(j==i){
                    continue;
                }
                total*=nums[j];
            }
            ans.push_back(total);}
    
    return ans;
}


    int main(){
    vector<int> arr={1,2,3,4};
    cout<<"hello"<<endl;
    for(int i:productExceptSelf(arr)){
        cout<<i<<"  ";
    }

}