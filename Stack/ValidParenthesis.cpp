class Solution {
public:
    bool isValid(string s) {
        
        stack<char>st;
        for(auto it:s){
            if(it=='(' or it=='{' or it=='['){
                st.push(it);
            }
            else{
                
                if(st.empty())return false;
                char last=st.top();
                if(it==')' and last=='(' or 
                it==']' and last=='[' or
                it=='}' and last=='{'){
                    st.pop();
                }
                else return false;
            }
        }
        return st.empty();
    }
};
