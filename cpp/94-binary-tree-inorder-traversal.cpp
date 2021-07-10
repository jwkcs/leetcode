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
    // void inorder(TreeNode* root, vector<int>& ret){
    //     if(root == nullptr)
    //         return;
    //     inorder(root->left, ret);
    //     ret.push_back(root->val);
    //     inorder(root->right, ret);
    // }
    
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ret;
        // inorder(root, ret);
        stack<TreeNode*> s;
        while(root || !s.empty()){
            while(root){
                s.push(root);
                root = root -> left;
            }
            root = s.top();
            s.pop();
            ret.push_back(root->val);
            root = root->right;
        }
                
        return ret;
    }
};