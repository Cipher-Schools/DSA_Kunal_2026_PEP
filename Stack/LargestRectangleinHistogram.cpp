class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        vector<int>next(n,n);
        stack<pair<int,int>>st;
        for(int i=n-1;i>=0;i--){
            while(!st.empty() and st.top().first>=heights[i]){
                st.pop();
            }
            if(!st.empty()){
                next[i]=st.top().second;
            }
            st.push({heights[i],i});
        }
        stack<pair<int,int>>stt;
        vector<int>prev(n,-1);

        // find previous smaller
        for(int i=0;i<n;i++){
            while(!stt.empty() and stt.top().first>=heights[i]){
                stt.pop();
            }
            if(!stt.empty()){
                prev[i]=stt.top().second;
            }
            stt.push({heights[i],i});
        }

        int res=0;
        for(int i=0;i<n;i++){
            int width=next[i]-prev[i]-1;
            int area=width*heights[i];
            res=max(area,res);
        }
        return res;

    }
};
