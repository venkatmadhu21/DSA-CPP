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
    int pathSum(TreeNode* root, int targetSum) {
        unordered_map<long long, int> prefix; 
        prefix[0] = 1;  // Base case: sum=0 has 1 count
        return dfs(root, 0, targetSum, prefix);
    }
    int dfs(TreeNode* node, long long currSum, int target, unordered_map<long long, int>& prefix) {
        if (!node) return 0;
        currSum += node->val;
        int count = 0;
        if (prefix.count(currSum - target)) {
            count += prefix[currSum - target];
        }
        prefix[currSum]++;
        count += dfs(node->left, currSum, target, prefix);
        count += dfs(node->right, currSum, target, prefix);
        prefix[currSum]--; 
        return count;
    }
};
