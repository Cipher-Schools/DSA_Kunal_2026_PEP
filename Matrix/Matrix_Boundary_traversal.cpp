class Solution {
  public:
    vector<int> boundaryTraversal(vector<vector<int>>& mat) {
        // code here
        vector<int>ans;
        int r=mat.size();
        int c=mat[0].size();
        
        for(int i=0;i<c;i++){
            ans.push_back(mat[0][i]);
        }
        if(r==1)return ans;
        
        for(int i=1;i<r;i++){
            ans.push_back(mat[i][c-1]);
        }
        if(c==1)return ans;
        for(int i=c-2;i>=0;i--){
            ans.push_back(mat[r-1][i]);
        }
        for(int i=r-2;i>0;i--){
            ans.push_back(mat[i][0]);
        }
        return ans;
        
    }
};
