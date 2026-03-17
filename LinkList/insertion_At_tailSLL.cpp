#include<iostream>
using namespace std;

class LLNode{
    public:
    int data;
    LLNode* Next;

    LLNode(int val){
        this -> data=val;
        this -> Next=NULL;
    }

};

void insertfromtail(int val,LLNode* &Tail){
    LLNode* newnode=new LLNode(val);
    Tail->Next=newnode;
    Tail=newnode;
}

void printll(LLNode* &head){
    LLNode* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->Next;
    }
    cout<<endl;
}

int main(){
    LLNode* node1 = new LLNode(10);
    LLNode* head = node1;
    LLNode* Tail =node1;
    
    insertfromtail(12,Tail);
    insertfromtail(110,Tail);
    insertfromtail(1111,Tail);
    insertfromtail(12123,Tail);
    insertfromtail(11233,Tail);
    printll(head);

}