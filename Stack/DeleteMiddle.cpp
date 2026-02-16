class Solution {
  public:
    // Function to delete middle element of a stack.
    void deleter(stack<int>&st, int size){
        if(st.size()==(size+1)/2){
            st.pop();
            return;
        }
        int top=st.top();
        st.pop();
        deleter(st,size);
        st.push(top);
    }
    void deleteMid(stack<int>& s) {
        // code here..
        int n=s.size();
        deleter(s,n);
        // return s;
    }
};
