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
    int findmindepth(TreeNode* p1, TreeNode* p2, int d){
        if(p1 == nullptr && p2 == nullptr)
            return d;
        else if(p1 == nullptr)
            return findmindepth(p2->left, p2->right, d+1);
        else if(p2 == nullptr)
            return findmindepth(p1->left, p1->right, d+1);
        return min(findmindepth(p1->left, p1->right, d+1), findmindepth(p2->left, p2->right, d+1));
    }
    
    int minDepth(TreeNode* root) {
        return findmindepth(root, root, 0);
    }
};