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
    int dfs(TreeNode*node,int curMin,int curMax){
        if(!node)return 0;
        int diff1=abs(node->val-curMin);
        int diff2=abs(node->val-curMax);
        int best=max(diff1,diff2);

          curMin=min(curMin,node->val);
          curMax=max(curMax,node->val);

        int left=dfs(node->left,curMin,curMax);
        int right=dfs(node->right,curMin,curMax);

        return max(best,max(left,right));
    }
    int maxAncestorDiff(TreeNode* root) {
        if(!root)return 0;
        return dfs(root,root->val,root->val);
    }
};