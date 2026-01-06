#include <iostream>
using namespace std;

int length(char name[]) {
    int length = 0;
    for (int i = 0; name[i] != '\0'; i++) {
        length++;
    }
    return length;
}

void reverse(char name[],int size) {
    int s=0,e=size-1;
    char temp;
    while (s<=e) {
        temp =name[s];
        name[s]=name[e];
        name[e]=temp;
        s++;e--;
    }


}

bool ispalidrome(char name[],int size) {
    int s=0,e=size-1;
    while (s<e) {
        if (name[s]==name[e]) {
            s++;e--;
        }
        else {
            return false;
        }
    }
    return true;
}

int main() {
    char name[20];
    cout<<"Enter your name ";
    cin>> name;
    cout<< "welcome, " <<name<<endl;
    int size = length(name);
    cout<<"Your name length is ----> "<<size<<endl;

    reverse(name,size);
    cout<<"the reverse of the string ----> " << name<<endl;
    if (ispalidrome(name,size)) {
        cout<<"your name is palidrome"<<endl;
    }
    else {
        cout<<"your name is not palidrome"<<endl;
    }

}