#include<iostream>
using namespace std;

class LLNode{
    public:
    int data;
    LLNode* Next;

    LLNode(int val){
        this->data=val;
        this->Next=NULL;
    }

};

void insert_at_last(LLNode* &Tail,int val){
    LLNode* newnode= new LLNode(val);
    Tail->Next=newnode;
    Tail=newnode;
}

void Deletion_At_Head(LLNode* &head){
    LLNode* temp=head;
    head=temp->Next;
    delete temp;
}
void Deletion_At_end(LLNode* &head){
    LLNode* temp=head;
    LLNode* temp2;
    while(temp->Next!=NULL){
        temp2=temp;
        temp=temp->Next;
    }
    temp2->Next=NULL;
    delete temp;
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
LLNode* node1=new LLNode(3);
LLNode* Tail=node1;
LLNode* head=node1;
insert_at_last(Tail,4);
insert_at_last(Tail,7);
insert_at_last(Tail,98);
insert_at_last(Tail,13);
insert_at_last(Tail,155);
insert_at_last(Tail,1);
printll(head);
Deletion_At_end(head);
Deletion_At_end(head);
printll(head);
}