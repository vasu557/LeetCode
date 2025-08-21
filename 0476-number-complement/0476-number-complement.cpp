class Solution {
public:
    int findComplement(int num) {
       int temp=num;
       int count=0;
       while(temp){
        count+=1;
        temp = temp >> 1;
       }
       unsigned long long tot = (1ULL<<count)-1;
       int res = tot ^ num;
       return res;
    }
};