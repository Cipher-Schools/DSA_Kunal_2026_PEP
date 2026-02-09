Node* InsertatStart(Node* head, int val){
    Node* newhead=new Node(val);
    newhead->next=head;
    return newhead;
}
int main() {
    Node* head=new Node(10);
     head->next=new Node(20);
     head->next->next=new Node(30);
     head->next->next->next=new Node(40);
     head=InsertatStart(head,50);
     head=InsertatStart(head,60);
     head=InsertatStart(head,70);
     head=InsertatStart(head,80);
     Node* dummy=head;
     while(dummy!=NULL){
         cout<<dummy->data<<" ";
         dummy=dummy->next;
     }

    return 0;
}
