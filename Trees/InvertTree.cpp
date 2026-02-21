class Solution {
public:
   void swapTree(TreeNode* r) {
        if (r == nullptr)
            return;
        
        swap(r->left, r->right);
        swapTree(r->left);
        swapTree(r->right);                
    }

    TreeNode* invertTree(TreeNode* root) {
        swapTree(root);
        return root;
    }
};
