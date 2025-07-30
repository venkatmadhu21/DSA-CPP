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
#include <iostream>
#include <queue>
#include <utility> // for pair
using namespace std;

class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
        if (!root) return 0;
        
        long long maxWidth = 0;
        queue<pair<TreeNode*, long long>> q; // {node, index}
        q.push({root, 0});
        
        while (!q.empty()) {
            int size = q.size();
            long long firstIndex = q.front().second; // index of first node in level
            long long lastIndex = q.back().second;   // index of last node in level
            maxWidth = max(maxWidth, lastIndex - firstIndex + 1);
            
            for (int i = 0; i < size; i++) {
                auto [node, index] = q.front();
                q.pop();
                long long curIndex = index - firstIndex; // normalize index to avoid overflow
                
                if (node->left) 
                    q.push({node->left, curIndex * 2 + 1});
                if (node->right) 
                    q.push({node->right, curIndex * 2 + 2});
            }
        }
        return (int)maxWidth;
    }
};
