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
    void help(TreeNode* root, int &sum)
{
    if(root==NULL) return;
    
    if(root->left!=NULL and root->left->left==NULL and root->left->right==NULL)
        sum+=root->left->val ;
    
     help(root->left,sum);
     help(root->right,sum);
}

int sumOfLeftLeaves(TreeNode* root) 
{
    int sum=0;
    
    help(root,sum);
    return sum;
    
}
};