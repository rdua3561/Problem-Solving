class Solution {
public:
    void reverse(string &word,int i,int j)
    {
        
        while(i<j)
        {
            swap(word[i],word[j]);
            i++;
            j--;
        }
        
    }
    string reversePrefix(string word, char ch) {
        
        int i=0;
        for(;word[i]!=0;i++)
        {
            if(ch==word[i] && ch!=NULL)
            {
                reverse(word,0,i);
                break;
            }
        }
        
        
        
        return word;
        
    }
};