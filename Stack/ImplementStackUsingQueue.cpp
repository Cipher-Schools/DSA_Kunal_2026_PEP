class myStack {
    queue<int> q;

  public:

    void push(int x) {
        // Inserts an element x at the top of the stack
        int size=q.size();
        q.push(x);
        while(size--){
            int temp=q.front();
            q.pop();
            q.push(temp);
        }
        
        
    }

    void pop() {
        // Removes an element from the top of the stack
        if(!q.empty()) q.pop();
    }

    int top() {
        // Returns the top element of the stack
        // If stack is empty, return -1
        if(q.empty())return -1;
        return q.front();
    }

    int size() {
        // Returns the current size of the stack
        return q.size();
    }
};
