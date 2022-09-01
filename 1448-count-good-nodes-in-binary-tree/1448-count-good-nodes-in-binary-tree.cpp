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
    int goodNodes(TreeNode* root) {
        int r=0;
        find(root,root->val,r);
        return r;
    }
    void find(TreeNode* root,int v,int& r){
        if(root==NULL)return;
        if(root->val >=v)r++;
        find(root->left,max(v,root->val),r);
        find(root->right,max(v,root->val),r);
    }
};