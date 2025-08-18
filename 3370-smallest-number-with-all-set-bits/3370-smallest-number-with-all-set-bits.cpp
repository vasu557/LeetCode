class Solution {
public:
    int smallestNumber(int n) {
        if(n == 0 || n == 1) return 1;
        int ans;
        for(int i=1;i<32;i++){
            if(((1<<i) - 1) >= n){
                ans=(1<<i) - 1;
                break;
            }
        }
    return ans;
    }
};