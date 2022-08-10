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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>v;
        if(root==NULL)return v;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            vector<int>curr;
            int count=q.size();
            for(int i=0;i<count;i++){
                 TreeNode* node=q.front();
            curr.push_back(node->val);
           
            q.pop();
                if(node->left){
                    q.push(node->left);
                }
                if(node->right)q.push(node->right);
            }
            v.push_back(curr);
        }
        return v;
    }
};