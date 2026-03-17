#include<iostream>
using namespace std;

class LLNode{
    public:
    int data;
    LLNode *Next;
    
    //constructor used 
    LLNode(int val){
        this->data=val;
        this->Next=NULL;
    }
};

int main(){
    LLNode* node1= new LLNode(5);
    cout<<node1 -> data<<endl;
    cout<<node1 -> Next<<endl;
}