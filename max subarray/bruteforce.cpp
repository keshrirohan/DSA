#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[]={
        6,-10,5,5,9
    };
    int m = INT_MIN;
    int n =sizeof(arr)/sizeof(int);
    for(int st=0;st<n;st++){
        int sum = 0;
        for(int end=st;end<n;end++){
            sum+=arr[end];
            m = max(sum,m);
            
        }
    }
    cout << m;
}