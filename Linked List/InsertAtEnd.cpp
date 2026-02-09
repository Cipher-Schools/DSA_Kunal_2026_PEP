#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};

Node* InsertatEnd(Node* head, int val){
    Node* last=head;
    
    while(last->next!=NULL){
        last=last->next;
    }
    last->next=new Node(val);
    return head;
}
int main() {
    Node* head=new Node(10);
     head->next=new Node(20);
     head->next->next=new Node(30);
     head->next->next->next=new Node(40);
     head=InsertatEnd(head,50);
     head=InsertatEnd(head,60);
     head=InsertatEnd(head,70);
     head=InsertatEnd(head,80);
     Node* dummy=head;
     while(dummy!=NULL){
         cout<<dummy->data<<" ";
         dummy=dummy->next;
     }

    return 0;
}
