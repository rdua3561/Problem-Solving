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
    int findBottomLeftValue(TreeNode* root) {
        
        if(root==NULL) return -1;
        
        queue<TreeNode*> q;
        q.push(root);
        TreeNode* temp;
        while(!q.empty())
        {
            temp=q.front();
            q.pop();
            
            if(temp->right!=NULL) q.push(temp->right);
            if(temp->left!=NULL)  q.push(temp->left);
        }
        return temp->val;
        
    }
};