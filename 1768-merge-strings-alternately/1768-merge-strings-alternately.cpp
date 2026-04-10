class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int x=0,y=0;
        string ans="";
        while(x < word1.length() && y<word2.length()){
            ans+=word1[x];
            ans+=word2[y];
            x++;
            y++;
        }
        if(x < word1.length()){
            for(int i=x;i<word1.length();i++){
                ans+=word1[i];
            }
        }
        if(y < word2.length()){
            for(int i=y;i<word2.length();i++){
                ans+=word2[i];
            }
        }
        return ans;
    }
};