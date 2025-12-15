class Solution {
public:
    long long getDescentPeriods(vector<int>& prices) {
        if(prices.size() == 1) return 1;
        long long count =1;
        long long len=1;
        for(int i=1;i<prices.size();i++){
            if(prices[i] == prices[i-1]-1)
            len+=1;
            else
            len=1;


            count+=len;
        }
        return count;
    }
};