class Solution {
public:
    int height(TreeNode* root){
        if(!root)return 0;
        return 1+max(height(root->left),height(root->right));
    }
    bool isBalanced(TreeNode* root) {
        if(!root)return true;
        int lh=height(root->left);
        int rh=height(root->right);
        return abs(lh-rh)<2 and isBalanced(root->left) and isBalanced(root->right);
    }
};
