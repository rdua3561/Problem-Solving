class Solution {
public:
    string interpret(string command) {
        string st="";
        
        for(int i=0;i<command.length();i++)
        {
            if(command[i]=='('&& command[i+1]==')')
            {
                i++;
                st+='o';
            }
             else if(command[i]=='(' && command[i+1]=='a' && command[i+2]=='l' &&command[i+3]==')')
             {
                 i+=3;
                 st+='a';
                 st+='l';
             }
            
            else 
                st+='G';
                
        }
        return st;
    }
};