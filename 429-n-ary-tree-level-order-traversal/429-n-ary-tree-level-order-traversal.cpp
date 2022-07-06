/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        
         queue<Node*> q;
        vector<vector<int>> ans;
        if(root==NULL) return ans;
        q.push(root);
        while(!q.empty())
        {
            int sz=q.size();
            vector<int> v;
            for(int i=1;i<=sz;i++)
            {
               auto temp=q.front();
                q.pop();
                v.push_back(temp->val);
                
//                  for(int j=0;j<temp->children.size();j++)
//                 {
                    
//                     q.push(temp->children[j]); 
//                 }
                for (auto i : temp -> children)
                     q.push(i);
                 
                
            }
            ans.push_back(v);
            
            
        }
        return ans;
    }
        
};