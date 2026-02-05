#include<iostream>
using namespace std;

int  factorial(int a){
    int sum=1;
    if(a == 1){
        return 1;
    }
    

    sum = a*factorial(a-1); //  4*3*2*1 = 24
    cout<<"sum -- a "<< sum <<" "<<a <<endl;
    return sum;
}


int main(){
    cout << factorial(4);
}