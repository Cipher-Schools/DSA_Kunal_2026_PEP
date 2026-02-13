/* class Node {
  public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
}; */

class myStack {
    
  public:
    Node* head=NULL;
    int n=0;
    myStack() {
        // Initialize your data members
    }

    bool isEmpty() {
        // check if the stack is empty
        if(head!=NULL)return false;
        return true;
        
    }

    void push(int x) {
        // Adds an element x at the top of the stack
        Node* nn=new Node(x);
        nn->next=head;
        head=nn;
        n++;
    }

    void pop() {
        // Removes the top element of the stack
        head=head->next;
        n--;
    }

    int peek() {
        
        // Returns the top element of the stack
        if(head)return head->data;
        // If stack is empty, return -1
        return -1;
        
    }

    int size() {
        // Returns the current size of the stack.
        return n;
    }
};
