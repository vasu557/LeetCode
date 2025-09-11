class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        int n=arr.size();
        int nse[n];
        stack<int>st1;
        for(int i=n-1;i>=0;i--){
            while(!st1.empty() && arr[i]<=arr[st1.top()]){
                st1.pop();
            }
            nse[i]=st1.empty() ? n : st1.top();
            st1.push(i);
        }
        int psee[n];
        stack<int>st2;
        for(int i=0;i<n;i++){
            while(!st2.empty() && arr[i]<arr[st2.top()]){
                st2.pop();
            }
            psee[i]=st2.empty() ? -1 : st2.top();
            st2.push(i);
        }
    long long total=0;
    int mod = 1e9 + 7;
    for(int i=0;i<n;i++){
        long long left = i - psee[i];
        long long right = nse[i]-i;
        total = (total + (left * right % mod) * arr[i]) % mod;
    }

    return total;


    }
};