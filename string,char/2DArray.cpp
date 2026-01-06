#include <iostream>
#include<vector>
using namespace std;


bool isthere(int arr[][3],int target) {
    for (int row=0;row<3;row++) {
        for (int col=0;col<3;col++) {
            if (arr[row][col] == target) {
                return true;
            }
        }
    }
    return false;
}

vector<int> rowwiseSum(int arr[][3]) {
    int rowsum;
    vector<int> sum;
    for (int row=0;row<3;row++) {
        rowsum=0;
        for (int col=0;col<3;col++) {
            rowsum+=arr[row][col];
        }
        sum.push_back(rowsum);
    }
    return sum;
}

int main() {
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};

    // insert the value
    // for (int row=0;row<3;row++) {
    //     for (int col=0;col<3;col++) {
    //         cout<<"Enter number: ";
    //         cin>>arr[row][col];
    //     }
    // }


    // for (int col=0;col<3;col++) {
    //     for (int row=0;row<3;row++) {
    //         cin>>arr[row][col];
    //     }
    // }

    // for (int row=0;row<3;row++) {
    //     for (int col=0;col<3;col++) {
    //         cout<<arr[row][col]<<" ";
    //     }
    //     cout<<endl;
    // }

    cout<<endl;

    // for (int col=0;col<3;col++) {
    //     for (int row=0;row<3;row++) {
    //         cout<<arr[row][col]<<" ";
    //     }
    //     cout<<endl;
    // }


    cout<< isthere(arr,55);
    vector<int> sum= rowwiseSum(arr);
    int max= INT_MIN;
    for (int i:rowwiseSum(arr)) {
        cout<<i<<" ";
        max=max>i?max:i;
    }
    cout<<endl;
    cout<<max<<endl;

    return 0;



}