class MyStack {
public:
    queue<int>q1;//primary queue
    queue<int>q2;
    MyStack() {
        
    }
    
    void push(int x) {
        q1.push(x);
    }
    
    int pop() {
        // Move all the elements except last one to q2'
        while(q1.size()>1){
            int temp=q1.front();
            q1.pop();
            q2.push(temp);
        }
        // then pop the last element from q1
        int popped=q1.front();
        q1.pop();
        swap(q1,q2);
        return popped;
    }
    
    int top() {
         // Move all the elements except last one to q2
         while(q1.size()>1){
            int temp=q1.front();
            q1.pop();
            q2.push(temp);
        }
       
        // then return  the last element from q1 after moving it.
        int top=q1.front();
        q1.pop();
        q2.push(top);
        swap(q1,q2);
        return top;
    }
    
    bool empty() {
        return q1.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */
