class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n=nums.size();
        stack<int>st;
        vector<int>vec;
        int arr[n];
        for(int i=2*n-1;i>=0;i--){
            while(!st.empty() && st.top()<=nums[i%n]){
                st.pop();
            }
            if(i<n){
                if(st.empty()) arr[i%n]=-1;
                else arr[i%n] = st.top();
            }
            st.push(nums[i%n]);
        }
    for(int i=0;i<n;i++){
        vec.push_back(arr[i]);
    }
    return vec;
    }
};