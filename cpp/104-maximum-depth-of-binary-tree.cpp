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
    int calDepth(TreeNode* root, int d){ 
        if(root == nullptr)
            return d;
        return max(calDepth(root->left, d + 1), calDepth(root->right, d + 1));
    }
    
    int maxDepth(TreeNode* root) {
        return calDepth(root, 0);
    }
};