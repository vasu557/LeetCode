class Solution {
public:
    bool hasAlternatingBits(int n) {
        string s="";
       while(n > 0){
        if(n & 1 ){
            s+='1';
        }
        else{
            s+='0';
        }
        n= n>>1;
       }
       int k = s.length()-1;
       for(int i=k;i>0;i--){
        if(s[i] == s[i-1]){
            return false;
        }
       }
       return true;
    }
};