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
    vector<vector<int>> ans;
    void help(TreeNode* root, int targetSum, int sum, vector<int> & v)
    {
        if(root==NULL) return;
        
        v.push_back(root->val);
        sum+=root->val;
        
        if(root->left==NULL and root->right==NULL)
        {
            if(sum==targetSum)
            {
                ans.push_back(v);
            }
            
        }
        
        
        
        help(root->left,targetSum,sum,v);
        help(root->right,targetSum,sum,v);
        //sum-=root->val; rakho ya na rakho frq ni pdta
        v.pop_back();
        
    }
    
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int> v;
        help(root, targetSum, 0, v);
        return ans;
    }
};