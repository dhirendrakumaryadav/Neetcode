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
     
    void get(TreeNode* root,int t,vector<int>&path,vector<vector<int>>&ans){
        if(root==NULL)return;
        
        path.push_back(root->val);
        if(!root->left&&!root->right&&t==root->val)ans.push_back(path);
        get(root->left,t-root->val,path,ans);
          get(root->right,t-root->val,path,ans);
        path.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int>path;
        vector<vector<int>>ans;
        get(root,targetSum,path,ans);
        return ans;
    }
};