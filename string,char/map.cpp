#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <map>
using namespace std;

int main(){
        map<int,int> mp={{1,2},{3,4},{5,6}};
        for(auto i:mp){
            cout<<i.first<<" "<<i.second<<endl;
        }
        cout<< mp[2]<<endl;
        cout<<mp.size()<<endl;
       cout<< mp.find(1)->first<<endl;
       
        return 0;
}