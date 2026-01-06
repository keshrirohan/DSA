#include <iostream>
using namespace std;



int printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ,";
    }

}

int swapAlternative(int arr[],int size){
    int temp;
  
    for(int i=0;i<size;i+=2){
        temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
        
    }
    
}


int main(){
    int arr[9]={0,1,2,3,4,5,6,7,9};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<"hi"<<endl;
    swapAlternative(arr,size);
    printArray(arr,size);
}