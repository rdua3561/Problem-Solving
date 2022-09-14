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
    int ans=0;
    void solve(unordered_map<int,int>& mp,TreeNode* root)
    {
        if(root==NULL)
            return;
        
        mp[root->val]++;
        
        if(root->left==NULL and root ->right==NULL)
        {
            int c=0;
            for(int i=1;i<=9;i++)
            {
                if(mp[i]%2!=0)
                    c++;
                
            }
            
                if(c<=1)
                    ans++;
                
        }
        
        solve(mp,root->left);
        solve(mp,root->right);
        mp[root->val]--;
        
    }
    int pseudoPalindromicPaths (TreeNode* root) {
        unordered_map<int,int> mp;
        solve(mp,root);
        return ans;
    }
};