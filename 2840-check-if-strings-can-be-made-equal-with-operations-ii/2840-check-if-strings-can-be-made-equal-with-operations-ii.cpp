class Solution {
public:
    bool checkStrings(string s1, string s2) {
        if(s1 == s2 ) return true;
        if(s1.length() != s2.length()) return false;
        string t1="" , t2="", k1="", k2="";
        for(int i=0;i<s1.length();i++){
            if(i&1){
                t2+=s1[i];
                k2+=s2[i];
            }else{
                t1+=s1[i];
                k1+=s2[i];
            }
        }
        sort(t1.begin(),t1.end());
        sort(t2.begin(),t2.end());
        sort(k1.begin(),k1.end());
        sort(k2.begin(),k2.end());
        
        return (t1 == k1 && t2 == k2);
       
    }
};