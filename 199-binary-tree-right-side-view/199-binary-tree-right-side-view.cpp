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
    vector<int> rightSideView(TreeNode* root) {
        vector<int> v;
        if(root==NULL) return v;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty())
        {
            int sz=q.size();
            
            while(sz!=0)
            {
                auto temp=q.front();
                q.pop();
                if(sz==1)
                    v.push_back(temp->val);
                
                if(temp->left!=NULL)  q.push(temp->left);
                if(temp->right!=NULL)  q.push(temp->right);
                sz--;
            }
            
        }
        return v;
    }
};