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
    int widthOfBinaryTree(TreeNode* root) {
        queue<pair<TreeNode*,int>>q;
        q.push({root,0});
        int res=INT_MIN;
        while(!q.empty()){
       int size=q.size();
            int s=q.front().second;
            int e=q.back().second;
            res=max(res,e-s+1);
            for(int i=0;i<size;i++){
                TreeNode* temp=q.front().first;
                int g=q.front().second;
                int r=g-s;
                 q.pop();
                if(temp->left){
                    q.push({temp->left,(long long)2*r+1});
                }
                if(temp->right){
                    q.push({temp->right,(long long)2*r+2});
                }
            }
            
        }
        return res;
    }
};