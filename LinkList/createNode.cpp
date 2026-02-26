#include<iostream>
using namespace std;

class Node{
    public:
        int data;       //intial data
        Node* next;     //initial next_pointer
        
        Node(int val){  //constructor 
            this -> data=val;
            this -> next=NULL;
        }
};


int main(){

    Node* node1 = new Node(5 );
    cout<< node1 -> data<<endl;
    cout<< node1 -> next<<endl; 
    return 0;
}