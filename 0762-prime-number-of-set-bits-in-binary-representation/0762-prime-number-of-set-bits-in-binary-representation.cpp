class Solution {
public:
    int isPrime(int x){
        if(x <=1 ) return 0;
        int count =0;
        for(int i=2;i*i<=x;i++){
            if(x % i == 0)
            {
            return 0;
            }
        }
    return 1;
    }

    int countPrimeSetBits(int left, int right) {
        int total=0;
        for(int i=left;i<=right;i++){
            unsigned int inner=0;
            int n=i;
            while(n){
                inner+=1;
                n = n & (n-1);
            }
            if(isPrime(inner)){
                total+=1;
            }
        }
    return total;
    }
};