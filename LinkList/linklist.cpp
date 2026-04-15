#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* Next;

    Node(int val){
        this->data= val;
        this->Next=NULL;
    }
};

class List{
    Node* head,*tail;
    
    public:
    List(){
        head=tail=NULL;
        
    }

    int len(){
        Node* temp=head;
        int count=0;
        while(temp!=NULL){
            count++;
            temp=temp->Next;
        }
        return count;
    }
    
    void push_front(int val){
        Node* newnode= new Node(val);
        if(head==NULL){
            head=tail=newnode;
            
        }
        else{
            newnode->Next=head;
            head=newnode;

        }
    }


    void push_back(int val){
        Node* newnode = new Node(val);
        if(tail==NULL){
            head=tail=newnode;
        }
        else{

            tail->Next=newnode;
            tail=newnode;
        }
    }
   
    void push(int val,int pos){
     
        if(pos==1){
            push_front(val);
            return;
        }
        if(pos==len()+1){
            push_back(val);
            return;
        }
        if(pos > len()+1 || pos <= 0){
            cout<<"unappropriate position"<<endl;
            return;
        }

        else{
            Node* newnode =new Node(val);
            Node* temp = head;
            int count=1;
            while(count<pos-1){
                count++;
                temp=temp->Next;
            }
            newnode->Next=temp->Next;
            temp->Next=newnode;
        }


    }
    
    void pop_back(){
        Node* temp=head;
        Node* temp2;
        if(tail==NULL) return;
        if(head==tail){
            delete tail;
            head=tail=NULL;
            return;
        }
        while(temp->Next!=NULL){
            temp2=temp;
            temp=temp->Next;
        }
        tail=temp2;
        delete temp;
        tail->Next=NULL;
        
        
    }

    void pop_front(){
        if(head==NULL){
            return;
        }
        if(head==tail){
            delete head;
            head=tail=NULL;
            return;
        }
        Node* temp=head;

        head=head->Next;
        delete temp;

    }

    void pop(int pos){
        if(pos<=0 ||pos>len() ){
            cout<<"unappropriate position"<<endl;
            return;
        }
        if(pos==len()){
            pop_back();
            return;
        }
        if(pos==1){
            pop_front();
                return;
            }
        else{
            int count=1;
            Node* temp=head;
            while(count<pos-1){
                temp=temp->Next;
                count++;
            }
            Node *curr=temp->Next;
            Node *next=curr->Next;
            temp->Next=next;
            delete curr;

            
        }

    }

    int search(int val){
        Node* temp= head;
        int idx=0;
        while(temp!=NULL){
            if(temp->data==val){
                cout<<idx<<endl;
                return idx;
            }
            idx++;
            temp=temp->Next;

        }
        cout<<"not found"<<endl;
        return -1;
    }

    void printll(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" -> ";
            temp=temp->Next;
        }
        cout<<"NULL"<<endl;
    }
    



};
int main(){
    List ll;
   ll.push_back(5);
   ll.push_back(3);
   ll.push_back(6);
    cout<<"the length is " << ll.len()<<endl;
    ll.search(6);

}