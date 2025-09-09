class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n= temperatures.size();
        stack<int>st;
        int arr[n];
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && temperatures[i]>=temperatures[st.top()]){
                st.pop();
            }
            if(st.empty()) arr[i]=0;
            else arr[i] = st.top()-i;
            st.push(i);
        }
        vector<int>vec;
        for(int i=0;i<n;i++){
            vec.push_back(arr[i]);
        }
    return vec;
    }
};