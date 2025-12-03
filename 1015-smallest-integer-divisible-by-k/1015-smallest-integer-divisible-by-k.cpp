class Solution {
public:
    int smallestRepunitDivByK(int k) {
        if( k % 2 == 0 || k % 5 ==0) return -1;
        int ans=1;
        int req=1 % k;
        while(true){
            if(req % k == 0){
                return ans;
                break;
            }
            req = (req*10 + 1 ) % k;
            ans+=1;
        }
    return ans;
    }
};