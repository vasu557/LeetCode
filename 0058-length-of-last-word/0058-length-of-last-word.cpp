class Solution {
public:
    int lengthOfLastWord(string s) {
        string ans="";
        int n=s.length();
        for(int i=n-1;i>=0;i--){
            if(s[i] == ' ' && ans.empty()) continue;
            else if(s[i] == ' ') break;
            ans+=s[i];
        }
        return ans.length();
    }
};