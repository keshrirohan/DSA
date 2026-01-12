#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
#include<cmath>
using namespace std;


int maxprices2(vector<int> & prices){
    int maxprofit=0;
    int bestbuy=prices[0];
    for(int i=1;i<prices.size();i++){
        if(bestbuy<prices[i]){
            maxprofit=max(maxprofit,prices[i]-bestbuy);
        }
        bestbuy=min(bestbuy,prices[i]);


    }
   
    return maxprofit;
}

int maxprices(vector<int> & prices){
    int max=INT_MIN;
    for(int i=0;i<prices.size()-1;i++){
        for(int j=i+1;j<prices.size();j++){
            if(max < prices[j]-prices[i]){
                max=prices[j]-prices[i];
            }
            else{
            max= max;
            }
        }
    }
    return max;
}


int main(){
    vector<int> prices ={7,1,5,3,6,4};
    cout<<maxprices(prices)<<endl;
    cout<<maxprices2(prices);
}