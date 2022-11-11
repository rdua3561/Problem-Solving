class Solution {
public:
    int removeDuplicates(vector<int>& a){
        
        int i=0,j=0,c=1;
        while(i<a.size())
        {
            if(a[i]!=a[j])
            {
                j++;
                swap(a[i],a[j]);
                c++;
            }
            
            i++;
        }
        return c;
    
        
    }
};