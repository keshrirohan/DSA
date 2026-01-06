#include<iostream>
using namespace std;
int main(){
    int arr[]={3,5,2,1};
    int n= sizeof(arr)/sizeof(int);
    cout<<n<<endl;
    for(int st=0;st<n;st++){
        for(int end=st;end<n;end++){
            for(int i=st;i<= end;i++){
                cout<<arr[i];
            }
            cout<<" ";
        }
        cout<<endl;
    }
}