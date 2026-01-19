class Solution {
public:
    bool isSubsequence(string s, string t) {
        int temp=0;
        for(int i=0;i<t.length() && temp <s.length();i++){
            if(t[i] == s[temp]){
                temp++;
            }
        }
        return temp == s.length();
    }
};