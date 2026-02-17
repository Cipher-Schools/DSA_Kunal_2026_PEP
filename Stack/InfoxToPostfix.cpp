class Solution {
  public:
    int prec(char a){
        if(a=='+' or a=='-')return 1;
        if(a=='*' or a=='/')return 2;
        if(a=='^') return 3;
    }
    
    string infixToPostfix(string& s) {
        // code here
        int n=s.length();
        stack<char>st;
        string postfix="";
        
        for(int i=0;i<n;i++){
            char a=s[i];
            
            if(a>='a' && a<='z' or
            a>='A' && a<='Z' or
            a>='0' && a<='9'){
                postfix+=a;
            }
            else if(a=='(')st.push(a);
            else if(a==')'){
                while(!st.empty() and st.top()!='('){
                    postfix+=st.top();
                    st.pop();
                }
                if(!st.empty()) st.pop();
            }
            else{
                while(!st.empty() and st.top()!='(' and
                   ( prec(st.top())>prec(a) or 
                    (prec(st.top())==prec(a) and a!='^'))
                ){
                    postfix+=st.top();
                    st.pop();
                }
                st.push(a);
            }
            
            
        }
        while(!st.empty()){
            postfix+=st.top();
            st.pop();
        }
        return postfix;
        
        
    }
};
