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
int main() {
    Node* head=new Node(10);
     head->next=new Node(20);
     head->next->next=new Node(30);
     head->next->next->next=new Node(40);
     
     Node* dummy=head;
     while(dummy!=NULL){
         cout<<dummy->data<<" ";
         dummy=dummy->next;
     }

    return 0;
    
    
    
    
}
