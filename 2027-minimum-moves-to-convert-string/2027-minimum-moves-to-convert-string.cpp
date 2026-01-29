class Solution {
public:
    int minimumMoves(string s) {
        int n = s.length();
        int count=0;
        for(int i=0;i<=n;){
            if(s[i] == 'X'){
                count+=1;
                i+=3;
            }
            else{
                i++;
            }
        }
        return count;
    }
};