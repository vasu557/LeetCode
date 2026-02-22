class Solution {
public:
    int binaryGap(int n) {
        string s ="";
        int count=0;
        while(n>0){
            if(n & 1){
                s+='1';
                count+=1;
            }
            else{
                s+='0';
            }
            n>>=1;
        }
        if(count < 2) return 0;
        reverse(s.begin(),s.end());
        int maxi=0;
        int l=0,r=1;
        while(r < s.length()){
            if(s[r] == '1'){
                maxi = max(r-l,maxi);
                l=r;
            }
            r++;
        }
    return maxi;
    }
};