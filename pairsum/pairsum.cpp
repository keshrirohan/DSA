#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[]={3,5,6,7,8,9,10
    };
    int n =sizeof(arr)/sizeof(int);

    int i = 0,j=n-1,ps,target;
    vector<int> ans;
    cin>>target;
    while(i<j){
        ps=arr[i]+arr[j];
        if(ps>target){
            j--;
            
        }
        else if(ps<target){
            i++;
           

        }
        else{
                ans.push_back(arr[i]);
                ans.push_back(arr[j]);
                i++;  // Move both pointers forward to avoid duplicates
                j--;
        }
        
    }
    for(int i=0;i<ans.size();i+=2){
        cout<<"("<< ans[i] << ","<<ans[i+1]<<")"<<endl;
    }
    
}