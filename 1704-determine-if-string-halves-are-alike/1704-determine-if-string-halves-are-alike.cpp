class Solution {
public:
    bool is_vowel(char c)
    {
        if(c=='a' || c=='e' || c=='i' || c=='o'|| c=='u'||c=='A' || c=='E' || c=='I' || c=='O'|| c=='U')
            return true;
        
        else
            return false;
    }
    bool halvesAreAlike(string s) {
        int l=s.length();
        cout<<l;
        int a=0;
        int b=0;
        for(int i=0;i<l/2;i++)
        {
            if(is_vowel(s[i]))
            {
                a++;
            }
        }
        
        
        
        for(int i=l/2;i<=l;i++)
        {
            if(is_vowel(s[i]))
            {
                b++;
            }
        }
        //cout<<a<<b;
        if(a==b)
            return true;
        else
            return false;
        
    }
};