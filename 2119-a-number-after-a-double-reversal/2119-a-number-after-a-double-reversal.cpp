class Solution {
public:
    bool isSameAfterReversals(int num) {
        int ori = num;
        int temp=0;
        while(num > 0){
            int rem = num % 10;
            temp = temp * 10 + rem;
            num = num /10;
        }
        int temp2 =0;
        while(temp > 0){
            int rem = temp % 10;
            temp2 = temp2* 10 + rem;
            temp= temp /10;
        }
        return temp2 == ori;
    }
};