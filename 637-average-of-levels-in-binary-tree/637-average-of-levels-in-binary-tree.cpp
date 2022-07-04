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
    vector<double> averageOfLevels(TreeNode* root) {
        
        //Method 1: Working + jugad
//         if(root==NULL) return {};
//         vector<double> ans;
//         queue<TreeNode*> q;
//         q.push(root);
//         while(!q.empty())
//         {
//             int sz=q.size();
//             int count=sz;
//             double avg=0;
//             while(sz!=0)
//             {
//                 auto temp=q.front();
//                 q.pop();
//                 avg+=(temp->val);
//                 if(sz==1)
//                 avg=avg/count;
                
//                 if(temp->left!=NULL) q.push(temp->left);
//                 if(temp->right!=NULL) q.push(temp->right);
                
//                 sz--;
//             }
//             ans.push_back(avg);
//         }
//         return ans;
//     }
        
        
        //Method 2: Easy going
         if(root==NULL) return {};
        vector<double> ans;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty())
        {
            int sz=q.size();
            double avg=0;
            for(int i=0;i<sz;i++)
            {
                auto temp=q.front();
                q.pop();
               avg+=temp->val;
                
                if(temp->left!=NULL) q.push(temp->left);
                if(temp->right!=NULL) q.push(temp->right);
                
                
            }
            ans.push_back(avg/sz);
        }
        return ans;
    }
};