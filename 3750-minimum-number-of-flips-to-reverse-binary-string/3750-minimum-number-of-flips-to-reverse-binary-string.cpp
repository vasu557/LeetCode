class Solution {
public:
    int minimumFlips(int n) {
        string s = "";
        int temp =n;
        while(temp != 0){
            if(temp % 2 == 1){
                s+='1';
            }
            else{
                s+='0';
            }
            temp = temp >> 1;
        }
        int po=1;
        int temp2 = 0;
        int n2=s.length()-1;
        for(int i=n2;i>=0;i--){
            if(s[i]=='1'){
                temp2+=po;
            }
            po*=2;
        }

        int res = n ^ temp2;
        int count=0;
        while(res > 0){
            count++;
            res = res & res-1;
        } 
        return count;
    }
};