
static unordered_set<string> sets({"+","-","*","/"});
class Solution {
public:
    
    int evalRPN(vector<string>& tokens) {
        stack<long long> s;
        for(auto it: tokens)
        {
            if(sets.find(it)==sets.end())
            {
                s.push(stoll(it));
            }
            else
            {
                long long n1=s.top();
                s.pop();
                
                long long n2=s.top();
                s.pop();
                
                if(it=="/")
                {
                    s.push(n2/n1);
                }
                else if(it=="-")
                {
                    s.push(n2-n1);
                }
                 else if(it=="+")
                {
                    s.push(n2+n1);
                }
                 else
                {
                    s.push(n2*n1);
                }
            }
        }
        return (int)s.top();
        
 
    }
};