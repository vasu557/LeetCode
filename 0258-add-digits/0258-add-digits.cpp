class Solution {
public:
    int addDigits(int num) {
        if(num == 0) return 0;
        int ans=num;
            while((int)log10(num)+1 != 1){
                int sum=0;
                while(num>0){
                    int rem =num%10;
                    sum+=rem;
                    num=num/10;
                }
                ans=sum;
                num=sum;
            }
        return ans;
    }
};