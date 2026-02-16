class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& arr) {
        int n=arr.size();
        vector<int>ans(n,-1);
        stack<int>st;
        for(int i=n-1;i>=0;i--){
            while(!st.empty() and st.top()<=arr[i]){
                st.pop();
            }
            if(!st.empty())ans[i]=st.top();
            st.push(arr[i]);
        }
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[arr[i]]=ans[i];
        }
        vector<int>res;
        for(int i=0;i<nums1.size();i++){
            res.push_back(mp[nums1[i]]);
        }
        return res;
    }
};
