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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        stack<TreeNode*>s1;
        stack<TreeNode*>s2;
       if(root==NULL)return {};
        s1.push(root);
        vector<vector<int>>ans;
        while(!s1.empty()||!s2.empty()){
            vector<int>curr;
            while(!s1.empty()){
                TreeNode* temp=s1.top();
                s1.pop();
                curr.push_back(temp->val);
                if(temp->left){
                    s2.push(temp->left);
                }
                if(temp->right){
                    s2.push(temp->right);
                }
            }
            if(!curr.empty()){
            ans.push_back(curr);
            }
               curr.clear();
            while(!s2.empty()){
              TreeNode* temp=s2.top();
                s2.pop();
                curr.push_back(temp->val);
                if(temp->right){
                    s1.push(temp->right);
                }
                if(temp->left){
                    s1.push(temp->left);
                }
            }
            if(!curr.empty()){
              ans.push_back(curr);
            }
               curr.clear();
        }
        return ans;
    }
};