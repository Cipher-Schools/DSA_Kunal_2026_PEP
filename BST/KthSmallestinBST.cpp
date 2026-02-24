class Solution {
public:
   void findKthSmallest(TreeNode* root, int& k, int& ans) {
        if (!root)
            return;
        findKthSmallest(root->left, k, ans);
        k--;
        if (k == 0) {
            ans = root->val;
            return;
        }

        findKthSmallest(root->right, k, ans);
    }
    int kthSmallest(TreeNode* root, int k) {
        int ans;
        findKthSmallest(root, k, ans);
        return ans;
    }
};
