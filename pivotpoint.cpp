#include<iostream>
using namespace std;

int findPivot(int arr[],int n){
    int start=0;
    int end=n-1;
    int mid;
    while(start<end){
        mid=start+(end-start)/2;
        if(arr[mid-1]>arr[mid]<arr[mid+1]){
        return mid+1;}
        else if(arr[mid-1]<arr[mid]>arr[mid+1]){
            return mid+2;
        }
        else if(arr[mid-1]<arr[mid]<arr[mid+1] && end>mid
        ){
            end=mid;
        }
        else if(arr[mid-1]<arr[mid]<arr[mid+1] && end<mid){
            start=mid;
        }

    }
}

int main(){
   int arr1[] = {7, 8, 1, 2, 3, 4, 5};
int n1 = sizeof(arr1) / sizeof(arr1[0]);
cout << "Test 1 (Expected 2): " << findPivot(arr1, n1) << endl;

// Test Case 2: Already sorted array
int arr2[] = {1, 2, 3, 4, 5};
int n2 = sizeof(arr2) / sizeof(arr2[0]);
cout << "Test 2 (Expected 0): " << findPivot(arr2, n2) << endl;

// Test Case 3: Pivot near the end
int arr3[] = {2, 3, 4, 5, 1};
int n3 = sizeof(arr3) / sizeof(arr3[0]);
cout << "Test 3 (Expected 4): " << findPivot(arr3, n3) << endl;

// Test Case 4: Two elements
int arr4[] = {2, 1};
int n4 = sizeof(arr4) / sizeof(arr4[0]);
cout << "Test 4 (Expected 1): " << findPivot(arr4, n4) << endl;
}