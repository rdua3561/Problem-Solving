class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
        //int carry;
        int n=digits.size();
        for(int i=digits.size()-1;i>=0;i--)
        {
            //carry=0;
            if(digits[i]!=9)
            {
                digits[i]++;
                break;
            }
            
            else
            {
              digits[i]=0;
                //carry=1;
            }
        }
        vector<int> v;
        if(digits[0]==0)
        {
           
            v.push_back(1);
            for(auto it: digits)
            {
                v.push_back(it);
            }
            return v;
        }
        return {digits};
    }
};