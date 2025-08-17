class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int>st;
        while(n != 1){
            if(st.find(n) != st.end()) return false;
            else{
                st.insert(n);
            }
            int sum=0;
            while(n>0){
                int rem= n%10;
                sum+=rem*rem;
                n=n/10;
            }
            n=sum;
        }
        return true;
    }
};