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
    int mini=INT_MAX;
    TreeNode* prev=nullptr;
    void inorder(TreeNode * root){
        if(!root)return;
        inorder(root->left);
        if(prev!=nullptr){
            mini=min(mini,root->val-prev->val);
        }
        prev=root;
        inorder(root->right);

    }
    int getMinimumDifference(TreeNode* root) {
        if(!root)return 0;
        inorder(root);
        return mini;
    }
};