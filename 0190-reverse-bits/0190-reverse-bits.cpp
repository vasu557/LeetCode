class Solution {
public:
    int reverseBits(int n) {
        string s ="";
        while(n>0){
            if(n % 2 == 0){
                s+='0';
            }
            else{
                s+='1';
            }
        n=n/2;
        }
        int temp=0;
        if(s.length()<32){
        temp = 32 - s.length();
        }
        for(int i=0;i<temp;i++){
            s+='0';
        }
        int ans=0;
        unsigned int po = 1;

        for(int i=s.length()-1;i>=0;i--){
            if(s[i]=='1'){
                ans+=po;
            }
            po=po*2;
        }

    return ans;
    }
};