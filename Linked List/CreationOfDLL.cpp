// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
        Node* prev;
        Node(int data){
            this->data=data;
            next=NULL;
            prev=NULL;   
        }
        
};
Node* deleteAtEnd(Node* tail){
     Node* temp=tail->prev;
    tail->prev=NULL;
    temp->next=NULL;
    return temp;
}
Node* deleteAtStart(Node* head){
    head->next->prev=NULL;
    return head->next;
}
Node* insertatEnd(Node* tail, int val){
    Node* nn=new Node(val);
    tail->next=nn;
    nn->prev=tail;
    tail=nn;
    return tail;
}
Node* insertAtStart(Node* head, int val){
    Node* newNode=new Node(val);
    newNode->next=head;
    head->prev=newNode;
    head=newNode;
    return head;
}
int main() {
    // Write C++ code here
    Node* head=new Node(5);
    Node* tail=head;
    // Insertion at start
    head=insertAtStart(head,4);
    head=insertAtStart(head,3);
    head=insertAtStart(head,2);
    
    
    // insertion at end
    tail=insertatEnd(tail,6);
    tail=insertatEnd(tail,7);
    tail=insertatEnd(tail,8);
    
    
    // deletion at start
    head=deleteAtStart(head);
    
    // deletiion at end
    tail=deleteAtEnd(tail);
    
    
    // Printing the Node values
    Node* curr=head;
    while(curr){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
    
    

    return 0;
}
