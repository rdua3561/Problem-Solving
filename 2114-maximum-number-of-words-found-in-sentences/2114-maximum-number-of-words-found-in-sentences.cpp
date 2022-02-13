#include<bits/stdc++.h>
class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int size = sentences.size();
        int max=0; // maximum words
        for(int i = 0;i<size;i++){
            int count = 1; // for counting spaces(words in sentence)
            for(int j = 0; j<sentences[i].length();j++){
                if (sentences[i][j]==' '){
                    count++;
                }
            }
            if (max<count){
                max = count;
            }
        }
        return max;
    }
};