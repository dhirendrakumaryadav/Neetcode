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
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if(depth==1){
            TreeNode* node=new TreeNode(val);
            node->left=root;
            return node;
        }
        queue<TreeNode*>q;
        int curr=1;
        q.push(root);
        while(!q.empty()){
            int n=q.size();
            curr++;
            while(n--){
                TreeNode* temp=q.front();
                q.pop();
                if(curr!=depth){
                    if(temp->left)q.push(temp->left);
                    if(temp->right)q.push(temp->right);
                }
                else{
                    TreeNode* node=new TreeNode(val);
                    node->left=temp->left;
                    temp->left=node;
                    TreeNode* node2=new TreeNode(val);
                    node2->right=temp->right;
                    temp->right=node2;
                }
            }
            
        }
        return root;
        
    }
};