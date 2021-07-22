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
    TreeNode* makeBST(vector<int>& nums, int l, int r){
        if(l > r)
            return nullptr;
        int m = l + (r - l) / 2;
        TreeNode* node = new TreeNode(nums[m]);
        node->left = makeBST(nums, l, m - 1);
        node->right = makeBST(nums, m + 1, r);
        return node;
    }
    
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return makeBST(nums, 0, nums.size() - 1);
    }
};