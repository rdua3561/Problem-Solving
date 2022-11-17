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
    static bool cmp(pair<int,int> ele1, pair<int,int> ele2)
    {
        if(ele1.first<ele2.first)
        {
            return true;
        }
        return false;
    }
    int solve(vector<int> v)
    {
        int swaps=0;
        vector<pair<int,int>> pp;
        for(int i=0;i<v.size();i++)
        {
            pp.push_back({v[i],i});
        }
        sort(pp.begin(),pp.end(),cmp);
        
        for(int i=0;i<v.size();i++)
        {
            pair<int,int> p=pp[i];
            int element=p.first;
            int index=p.second;
            if(i!=index)
            {
                swaps++;
                swap(pp[i],pp[index]);
                i--;
            }
        }
        return swaps;
    }
    
    int minimumOperations(TreeNode* root) {
        int ans=0;
        if(root==NULL) return ans;
        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty())
        {
            int sz=q.size();
            vector<int> v;
            for(int i=1;i<=sz;i++)
            {
                TreeNode* rd=q.front();
                q.pop();
                v.push_back(rd->val);
                if(rd->left)
                {
                     q.push(rd->left);
                }
                if(rd->right)
                {
                        q.push(rd->right);
                }
            }
            ans+=solve(v);
        }
        return ans;
            
    }
};