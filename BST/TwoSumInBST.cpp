class Solution {
public:
    bool helper(TreeNode* root,unordered_set<int>&st, int k){       
        if(root==NULL)return false;
        if(st.find(k-root->val)!=st.end())return true;
        st.insert(root->val);
        return helper(root->left,st,k)||helper(root->right,st,k);

    }
    bool findTarget(TreeNode* root, int k) {
        unordered_set<int>st;
        return helper(root,st,k);
    }
};
