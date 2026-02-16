class Solution {
public:
    int reverseBits(int n) {
        string s ="";
        for(int i=0;i<32;i++){
            if(n% 2 == 0){
                s+='0';
            }
            else{
                s+='1';
            }
            n = n>>1;
        }
        unsigned int temp=1;
        unsigned int ans=0;
        for(int i=s.length()-1;i>=0;i--){
            if(s[i] == '1')
            ans+=temp;

            temp*=2;
        }
        return ans;
    }
};