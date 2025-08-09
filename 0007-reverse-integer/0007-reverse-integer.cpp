class Solution {
public:
    int reverse(int x) {
        if (x == INT_MIN) return 0; 
        int temp=abs(x);
        int rev=0;
        while(temp > 0){
            int r = temp%10;
            if (rev > (INT_MAX - r) / 10) return 0;
            rev= rev*10+r;
            temp = temp/10;
        }
        if(x >0){
            return rev;
        }
        else{
            return -rev;
        }
    }
};