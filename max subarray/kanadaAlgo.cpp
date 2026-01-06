#include <iostream>
#include <climits>
#include <algorithm> 
using namespace std;



int main(){
    int arr[]={5,-10,6,8,3};
    int n =sizeof(arr)/sizeof(int);
    int sum=0;
    int maximum=INT_MIN;
    for(int st=0;st<n;st++) {
        
            sum+=arr[st];
            maximum = max(sum,maximum);

            if(sum < 0){
                sum=0;
            }
        
       
    }
    cout<<maximum<<endl;
  
}