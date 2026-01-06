#include<iostream>
using namespace std;
#include <string>

string removeDuplicates(string s) {
    int i = 0;
    while (i < s.size() ) {
        if (s[i] == s[i + 1]) {
            s.erase(i, 2);
            i-=1;
        } else {
            i++;
        }
    }
    return s;
}

int main() {
    string s="aaaaaaaa";

    cout<<removeDuplicates(s);
}