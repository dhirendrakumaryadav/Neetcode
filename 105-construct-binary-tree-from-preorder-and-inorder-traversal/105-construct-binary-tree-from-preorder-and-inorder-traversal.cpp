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
     int prei=0;
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int ie=0;
        int is=inorder.size()-1;
        return get(preorder,inorder,ie,is);
       
    }
    TreeNode* get(vector<int>& preorder,vector<int>& inorder,int is,int ie){
    if(is>ie)return NULL;
    
        TreeNode* root=new TreeNode(preorder[prei++]);
        int ind=0;
        for(int i=is;i<=ie;i++){
            if(root->val==inorder[i]){
                ind=i;
                break;
            }
        }
        root->left=get(preorder,inorder,is,ind-1);
        root->right=get(preorder,inorder,ind+1,ie);
        return root;
    }
};