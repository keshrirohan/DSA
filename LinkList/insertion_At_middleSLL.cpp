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

void insert_at_position(int val,LLNode* &head,int pos){
    LLNode* newnode=new LLNode(val);
    LLNode* temp=head;
    LLNode* temp2=temp;
    int i=1;
    while(i<pos-1 ){
        if(temp->Next==NULL){
            cout<<"limit exceed"<<endl;
            return;
        }
        temp=temp->Next;
        i++;
    }

    temp2 = temp->Next;
    temp->Next=newnode;
    newnode->Next=temp2;
}


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
LLNode* node1=new LLNode(5);
LLNode* head=node1;
LLNode* Tail=node1;
insertfromtail(4,Tail);
insertfromtail(24,Tail);
insertfromtail(43,Tail);
insertfromtail(48,Tail);
insertfromtail(49,Tail);
insertfromtail(40,Tail);
insertfromtail(42,Tail);
insertfromtail(40,Tail);
insertfromtail(456,Tail);
insertfromtail(121,Tail);
printll(head);
insert_at_position(15,head,3);
printll(head);

}