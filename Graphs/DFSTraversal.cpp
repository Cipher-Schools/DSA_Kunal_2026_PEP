class Solution {
  public:
    void dfs(vector<vector<int>>&adj, int node,vector<int>&vis,vector<int>&ans){
        if(vis[node]==1)return;
        
        vis[node]=1;
        ans.push_back(node);
        for(int it:adj[node]){
            if(!vis[it]){
                dfs(adj,it,vis,ans);
            }
        }
        
    }
    vector<int> dfs(vector<vector<int>>& adj) {
        // Code here
        vector<int>ans;
        int n=adj.size();
        vector<int>vis(n,0);
        for(int i=0;i<n;i++){
            if(vis[i]==0){
                dfs(adj,i,vis,ans);
            }
        }
        return ans;
    }
};
