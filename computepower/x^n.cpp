#include<iostream>
using namespace std;
int main(){
    int x=2,y=5;
    int ans=1;
    while(y>0){
        if(y%2==1){
            ans*=x;
        }
        x*=x;
        y/=2;
    }
    cout<<ans;
}