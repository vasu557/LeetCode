class Solution {
public:
    int bitwiseComplement(int n) {
        if(n == 0) return 1;
        string num="";
        while(n){
            if(n & 1)
            num+='1';
            else
            num+='0';
            
            n = n >>1;
        }
        reverse(num.begin(),num.end());
        for(int i=0;i<num.length();i++){
            if(num[i] == '0')
            num[i]='1';
            else
            num[i]='0';
        }
        int i=0;
        while(num.length() && num[i] == '0'){
            num.erase(0,1);
        }
        int ans =0;
        int po = 1;
        for(int i=num.length()-1;i>=0;i--){
            if(num[i] == '1')
            ans+=po;

            po*=2;
        }
    return ans;

    }
};