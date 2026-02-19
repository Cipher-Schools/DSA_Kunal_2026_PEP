/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void helper(vector<int>&vt , TreeNode* root){
        if(!root)return;
        
        vt.push_back(root->val);
        helper(vt,root->left);
        helper(vt,root->right);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>vt;

        helper(vt,root);
        return vt;
    }
};
