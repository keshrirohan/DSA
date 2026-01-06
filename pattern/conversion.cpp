#include <iostream>
#include <cmath>
using namespace std;

void decimalToBinary(){
     int decimal,bit;
     long long binary=0;
        cin >> decimal;
    long long  place=1;
    while(decimal!=0){
        bit = decimal & 1;
      
        binary=bit*place+binary;
        decimal=decimal>>1;
        place*=10;
    
    }
   cout<<binary;
}


void binaryToDecimal(){
    
    int binary, dig, decimal = 0, i = 0;
    cin >> binary;
    while (binary != 0) {
        dig = binary % 10;
        decimal = dig * (int)round(pow(2, i)) + decimal;
        binary /= 10;
        i++;
    
    }
    cout << decimal;
}

int main(){
    
//    decimalToBinary();
binaryToDecimal();

}