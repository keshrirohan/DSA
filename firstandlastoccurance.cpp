#include<iostream>
#include<vector>
using namespace std;


int fstocc(int arr[],int n,int k){
    int start=0;
    int end=n-1;
    int mid;
   int first = -1;


   while(start<=end){
    mid=start+(end-start)/2;
    if(arr[mid]==k){
        first=mid;
        end=mid-1;
    }
    
    else if(arr[mid]>k){
        end=mid-1;
    }
    else{
       start=mid+1;
    }

   }
   return first;
}

int lstocc(int arr[],int n,int k){
    int start=0,end=n-1,mid,last=-1;
    while(start<=end){
        mid=start+(end-start)/2;
        if(arr[mid]==k){
            last=mid;
            start=mid+1;
        }
        else if(arr[mid]>k){
            end=mid-1;
        }
        else{
            start=mid+1;
        }


    }
    return last;
}



int main(){
    
    // Test cases (as you requested)
    int arr1[] = {1, 2, 4, 4, 4, 5, 7, 9};
    int arr2[] = {3, 3, 3, 3, 3};
    int arr3[] = {2, 2, 3, 4, 5, 6};
    int arr4[] = {1, 3, 5, 7, 9, 9};
    int arr5[] = {1, 3, 5, 7, 9};
    int arr6[] = {6};
    int arr7[] = {1, 2, 3, 4, 5, 6};
    int arr8[] = {1,1,2,2,2,3,3,3,4,4,4,5,6,6,6,7,8,8,9,9};

    
        cout<<"the first occurance should be "<<fstocc(arr1, 8, 4) << "  "<<  lstocc(arr1, 8, 4)<<" expected is 2 " << endl;
        cout<<"the first occurance should be "<<fstocc(arr2, 5, 3) << "  "<<  lstocc(arr2, 5, 3)<<" expected is 0" << endl;
        cout<<"the first occurance should be "<<fstocc(arr3, 6, 2) << "  "<<  lstocc(arr3, 6, 2)<<" expected is 0" << endl;
        cout<<"the first occurance should be "<<fstocc(arr4, 6, 9) << "  "<<  lstocc(arr4, 6, 9)<<" expected is 4" << endl;
        cout<<"the first occurance should be "<<fstocc(arr5, 5, 4) << "  "<<  lstocc(arr5, 5, 4)<<" expected is -1" << endl;
        cout<<"the first occurance should be "<<fstocc(arr6, 1, 6) << "  "<<  lstocc(arr6, 1, 6)<<" expected is 0" << endl;
        cout<<"the first occurance should be "<<fstocc(arr7, 6, 4) << "  "<<  lstocc(arr7, 6, 4)<<" expected is 3" << endl;
        cout<<"the first occurance should be "<<fstocc(arr8, 20, 3)<< "  "<< lstocc(arr8, 20, 3)<< " expected is 5 " << endl;





        cout<<"the number of occurance  should be "<< lstocc(arr1, 8, 4) -  fstocc(arr1, 8, 4)    + 1  << endl;
        cout<<"the number of occurance  should be "<< lstocc(arr2, 5, 3) -  fstocc(arr2, 5, 3)    + 1 << endl;
        cout<<"the number of occurance  should be "<< lstocc(arr3, 6, 2) -  fstocc(arr3, 6, 2)    + 1 << endl;
        cout<<"the number of occurance  should be "<< lstocc(arr4, 6, 9) -  fstocc(arr4, 6, 9)    + 1 << endl;
        cout<<"the number of occurance  should be "<< lstocc(arr5, 5, 4) -  fstocc(arr5, 5, 4)    + 1  << endl;
        cout<<"the number of occurance  should be "<< lstocc(arr6, 1, 6) -  fstocc(arr6, 1, 6)    + 1 << endl;
        cout<<"the number of occurance  should be "<< lstocc(arr7, 6, 4) -  fstocc(arr7, 6, 4)    + 1 << endl;
        cout<<"the number of occurance  should be "<< lstocc(arr8, 20, 3)-  fstocc(arr8, 20, 3)    + 1  << endl;

    return 0;
}