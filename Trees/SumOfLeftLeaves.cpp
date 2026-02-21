class Solution {
public:
    int sumOfLeftLeaves(TreeNode* root) {
        if(!root)return 0;
        TreeNode* lnode=root->left;
        int curr=0;
        if(lnode && !lnode->left && !lnode->right )curr=lnode->val;
        return curr + sumOfLeftLeaves(root->left)+sumOfLeftLeaves(root->right);
    }
};
