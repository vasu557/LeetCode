class Solution {
public:
    int bitwiseComplement(int n) {
        if(n==0) return 1;
        int count = floor(log2(n))+1;
        int ans = ~n & ((1<<count) - 1);
        return ans;
    }
};