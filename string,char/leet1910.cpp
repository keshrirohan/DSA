#include<iostream>
#include<string>
using namespace std;

string removeOccurrences(string s, string part) {
    int id=5;
    int ps= part.size();
    cout<<s<<id<<endl;
    while (id!=-1) {
          id= s.find(part);
        cout<<id<<"+"<< ps <<endl;
        s.erase(id,ps);
        cout<<s<<endl;

    }
    cout<<id;
    // return 0;
}

int main() {
    string s = "daabcbaabcbc", part = "abc";

    cout<<removeOccurrences(s,part)<<endl;
}