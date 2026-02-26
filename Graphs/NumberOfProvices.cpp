class Solution {
public:
    void dfs(vector<vector<int>>&vt, vector<int>&vis, int &node){
        if(vis[node])return;
        vis[node]=1;
        for(int i=0;i<vt[node].size();i++){
            if(vt[node][i]){
                if(!vis[i])
                dfs(vt,vis,i);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        vector<int>vis(n,0);
        int province=0;
        for(int i=0;i<n;i++){

            if(!vis[i]){
                province++;
                dfs(isConnected,vis,i);
            }
        }
        return province;
    }
};
