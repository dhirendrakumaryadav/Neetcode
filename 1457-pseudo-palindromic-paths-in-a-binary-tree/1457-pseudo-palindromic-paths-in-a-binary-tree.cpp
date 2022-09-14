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
    int pseudoPalindromicPaths (TreeNode* root) {
        int c=0;
        vector<int>n(10,0);
        get(root,c,n);
        return c;
    }
    void get(TreeNode* root,int &c,vector<int>&n){
        if(root==NULL)return;
        n[root->val]++;;
        get(root->left,c,n);
        get(root->right,c,n);
        if(!root->left&&!root->right){
            int flag=0;
            for(int i=1;i<=9;i++){
                if(n[i]%2!=0)flag++;
            }
            if(flag==1||flag==0)c++;
        }
        n[root->val]--;
    }
};