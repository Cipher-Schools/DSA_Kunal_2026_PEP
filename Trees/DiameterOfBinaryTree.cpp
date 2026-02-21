class Solution {
public:
    int height(TreeNode* root){
        if(!root)return 0;
        return 1+max(height(root->left),height(root->right));
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(!root)return 0;
        int leftheight=height(root->left);
        int rightheight=height(root->right);
        int dia=max(diameterOfBinaryTree(root->left),diameterOfBinaryTree(root->right));
        return max((leftheight+rightheight),dia);
    }
};
