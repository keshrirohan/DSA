#include<iostream>
using namespace std;

class LLNode{
    public:
        int data;
        LLNode* Next;
    
        // constructor
        LLNode(int data){
            this->data=data;
            this->Next=NULL;
        }
};

void insertfromHead(int val,LLNode* &head){
    LLNode* newnode=new LLNode(val);
    newnode->Next=head;
    head=newnode;

}

void printll(LLNode* &head){
    LLNode* temp=head;
    while(temp!=NULL){
    cout<<temp->data<<" ";
    temp= temp->Next ;
    }
    cout<<endl;
}


int main(){
LLNode* node1= new LLNode(10);
LLNode* head = node1;
printll(head);
insertfromHead(12,head);
printll(head);
insertfromHead(118,head);
printll(head);
}