class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        long long sum=0;
        int temp=1;
        sort(happiness.begin(),happiness.end());
        int n=happiness.size();
        while(k && n>0){
        if(happiness[n-1]>0){
            sum+=happiness[n-1];
        }
            n=n-1;
            if(n>0)
            happiness[n-1] -= temp;
            temp+=1;
            k--;
        }
        return sum;
    }
};