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
    bool get(TreeNode* root1,TreeNode* root2){
        if(root1==NULL&&root2==NULL)return true;
        if(root1==NULL||root2==NULL)return false;
        int l=root1->val;
        int r=root2->val;
        return (l==r)&&(get(root1->left,root2->right))&&(get(root1->right,root2->left));
    }
    bool isSymmetric(TreeNode* root) {
        if(root==NULL)return true;
        if((root->left==NULL&&root->right!=NULL)||(root->left!=NULL&&root->right==NULL))return false;
        if(root->left==NULL&&root->right==NULL)return true;
        int l=root->left->val;
        int r=root->right->val;
       return get(root->left,root->right);
    }
};