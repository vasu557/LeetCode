class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        int n=nums.size();
        stack<int>st1;
        int nse[n];
        long long totalMin=0;
        for(int i=n-1;i>=0;i--){
            while(!st1.empty() && nums[st1.top()] >= nums[i]){
                st1.pop();
            }
            nse[i]=st1.empty() ? n : st1.top();
            st1.push(i);
        }
        int psee[n];
        stack<int>st2;
        for(int i=0;i<n;i++){
            while(!st2.empty() && nums[st2.top()] > nums[i] ){
                st2.pop();
            }
            psee[i] = st2.empty() ? -1 : st2.top();
            st2.push(i);
        }
        for(int i=0;i<n;i++){
            long long left = i - psee[i];
            long long right = nse[i] -i;
            totalMin+=  (left * right *1LL* nums[i]);
        }
        int nge[n];
        stack<int>st3;
        for(int i=n-1;i>=0;i--){
            while(!st3.empty() && nums[st3.top()] <= nums[i]){
                st3.pop();
            }
            nge[i] = st3.empty() ? n : st3.top();
            st3.push(i);
        }
        int pgee[n];
        stack<int>st4;
        for(int i=0;i<n;i++){
            while(!st4.empty() && nums[st4.top()] < nums[i]){
                st4.pop();
            }
            pgee[i] = st4.empty()  ? -1 : st4.top();
            st4.push(i);
        }
        long long totalMaxi=0;
        for(int i=0;i<n;i++){
            long long left = i - pgee[i];
            long long right = nge[i] - i;
            totalMaxi += (left * right * 1LL * nums[i]);
        }
    return totalMaxi - totalMin;
    }
};