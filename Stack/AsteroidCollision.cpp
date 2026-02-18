class Solution {
public:
    bool isopp(int a,int b){
        if(b<0 and a>0)return true;
        return false;
    }
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int>st;
        int n=asteroids.size();
        for(int i=n-1;i>=0;i--){
            while(i>=0 and !st.empty() and 
            isopp(asteroids[i],st.top())){
                int top=abs(st.top());
                int a=abs(asteroids[i]);
                if(top<a)st.pop();
                else if(top==a){
                    st.pop();
                    i--;
                }
                else i--;

            }
            if(i>=0)st.push(asteroids[i]);
        }
        vector<int>res;
        while(!st.empty()){
            res.push_back(st.top());
            st.pop();
        }
        
        return res;
    }
};
