#include<iostream>
using namespace std;

int sum(int n){
    int all=0;
    if(n==0) return 0; 
    all=n+sum(n-1);
    return all;
}

int main(){
    cout<<sum(4);
}