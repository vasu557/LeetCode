class Solution {
public:
    int monotoneIncreasingDigits(int n) {
       string s = to_string(n);
       int len =s.length();
       int marker = len;
       for(int i=len-1;i>0;i--){
            if(s[i]< s[i-1]){
                s[i-1]--;
                marker = i;
            }
       } 
       for(int i=marker;i<len;i++){
        s[i] = '9';
       }
       return stoi(s);
    }
};