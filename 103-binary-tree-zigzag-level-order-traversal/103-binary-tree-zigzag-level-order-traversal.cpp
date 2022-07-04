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
        queue<TreeNode*> q;
        vector<vector<int>> ans;
        if(root ==NULL) return ans;
        q.push(root);
        int c=1;
        while(!q.empty())
        {
            vector<int> v;
            int sz=q.size();
            
            for(int i=1;i<=sz;i++)
            {
                auto temp=q.front();
                q.pop();
                v.push_back(temp->val);
               
                if(temp->left!=NULL) q.push(temp->left);
                if(temp->right!=NULL) q.push(temp->right);  //[1,2,3,4,null,null,5]
                
              
            }
           if(c%2==0)
               reverse(v.begin(),v.end());
            
            ans.push_back(v);
            c++;
        }
        return ans;
    }
};