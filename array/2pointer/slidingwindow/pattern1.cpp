#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int bruteforce(vector<int> &arr, int k){
    int n=arr.size(),sum=0,maxsum=0;
    
    for(int i=0;i<=n-k;i++){
        sum=0;
        for(int j=i;j<(k+i);j++){
            sum+=arr[j];
            maxsum=max(maxsum,sum);
        }
    }
    return maxsum;
}


int better(vector<int> &arr,int k){
    int n=arr.size(),sum=0,maxsum=0;
    int r=k-1;


    for(int l=0;l<=n-k;l++){
        sum=0;
        for(int i=l;i<=r;i++){
            sum+=arr[i];
            maxsum=max(maxsum,sum);
        }
        r++;
    }
    return maxsum;
}

int optimised(vector<int> &arr,int k){
    int n=arr.size(),sum=0,maxsum=0;
    int r=k-1,l=0;
    for(int i=l;i<=r;i++){
        sum+=arr[i];
        
    }
    maxsum=max(maxsum,sum);
    while(r<n-1){
        
        r++;
        sum-=arr[l];
        sum += arr[r];
        maxsum=max(maxsum,sum);
        l++;
    }

    return maxsum;
    

}

int main(){
    vector<int> arr={0,1,2,3,4,5,6};
    int k=3;
    cout<<bruteforce(arr,k)<<" is ans by bruteforce";
    cout<<endl;
    cout<<better(arr,k)<<" is ans by better solution";
    cout<<endl;
    cout<<optimised(arr,k)<<" is ans by optimised solution";
}