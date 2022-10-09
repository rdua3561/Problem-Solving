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
    
    void help(TreeNode* root,vector<int> &v)
    {
        if(root==NULL) return;
        
        help(root->left,v);
        v.push_back(root->val);
        help(root->right,v);
    }
    bool findTarget(TreeNode* root, int k) {
        //cout<<"hii";
        vector<int> v;
        help(root, v);
        //cout<<"bye";
        
        for(int i=0;i<v.size();i++)
        {
            cout<<v[i]<<" ";
        }
        int i=0;
        int j=v.size()-1;
        
       
        while(i<j)
        {
            if(k==v[i]+v[j])
            {
                return true;
            }
            
            else if(v[i]+v[j]>k)
            {
                j--;
            }
            
            else
            {
                i++;
            }
        }
        return false;
    }
};