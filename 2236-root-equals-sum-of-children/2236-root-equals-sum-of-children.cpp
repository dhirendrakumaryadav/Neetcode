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
    bool checkTree(TreeNode* root) {
        if(root==NULL||(root->right==NULL&&root->right==NULL))return true;
        int l=0;
        int r=0;
        if(root->left){
          l=root->left->val;
        }
        if(root->right){
        r=root->right->val;
        }
        return ((l+r)==root->val)&&checkTree(root->left)&&checkTree(root->right);
    }
};