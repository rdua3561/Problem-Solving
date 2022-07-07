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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        
        vector<vector<int>> ans;
        if(root==NULL) return ans;
        queue<pair<TreeNode*,pair<int,int>>> q;
        map<int,map<int,multiset<int>>> mp;
        q.push({root,{0,0}});
        while(!q.empty())
        {
            // vector<int> v;
            // int sz=q.size();
            // while(sz!=0)
            // {
            TreeNode* temp=q.front().first;
            int dist=q.front().second.first;
            int level=q.front().second.second;
            q.pop();
            
            if(temp->left)  q.push({temp->left,{dist-1,level+1}});
            if(temp->right)  q.push({temp->right,{dist+1,level+1}});
            
            mp[dist][level].insert(temp->val);
                
            
        }
        
        for(auto it: mp)
        {
            vector<int> v;
            for(auto k: it.second)
            {
                v.insert(v.end(),k.second.begin(),k.second.end());
                
            }
               //[3,1,4,0,2,2]
            ans.push_back(v);
           
        }
        return ans;
    }
};