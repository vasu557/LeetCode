class Solution {
public:
    bool checkOnesSegment(string s) {
        int n=s.length();
        int l=-1;
        for(int i=n-1;i>=0;i--){
            if(s[i] != '0'){
                l=i;
                break;
            }
        }
        for(int i=0;i<=l;i++){
            if(s[i] != '1')
            return false;
        }
        return true;
    }
};