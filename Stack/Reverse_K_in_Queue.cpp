class Solution {
  public:
    queue<int> reverseFirstK(queue<int> q, int k) {
        // code here
         int n=q.size();
         stack<int>st;
         if(k>n)return q;
         
        //  Push first K elements to stack
         for(int i=0;i<k;i++){
             st.push(q.front());
             q.pop();
         }
        //  Move stack elements to queue
         while(!st.empty()){
            q.push(st.top());
             st.pop();
         }
         
        //  push first n-k elements at back of queue
         for(int i=0;i<n-k;i++){
             int temp=q.front();
             q.pop();
             q.push(temp);
         }
         return q;
    }
};
