class Solution {
public:
    int totalMoney(int n) {
        int ans=0;
        int temp=0;
        int weeks = n/7;
        int rem = n % 7;
       while(weeks--){
        ans+=28+temp;
        temp = temp+7;
       }
       int next = temp/7 + 1;
       ans += (rem * (rem + 1)) / 2 + (next - 1) * rem;

       return ans;
    }
};