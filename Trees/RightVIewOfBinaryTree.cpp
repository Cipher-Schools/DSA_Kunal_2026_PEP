// Solution Using BFS 

class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<vector<int>>ans;
        if(root==NULL)return {};
        queue<TreeNode*>q;
        q.push(root);

        while(!q.empty()){
            int s=q.size();
            vector<int>temp;
            for(int i=0;i<s;i++){
                TreeNode* curr=q.front();
                q.pop();
                temp.push_back(curr->val);
                if(curr->left)q.push(curr->left);
                if(curr->right)q.push(curr->right);
            }
            ans.push_back(temp);
        }
        vector<int>res;
        for(vector<int> it:ans){
            if(it.size()>0){
                int last=it[it.size()-1];
                res.push_back(last);
            }
            
        }
        return res;
    }
};
