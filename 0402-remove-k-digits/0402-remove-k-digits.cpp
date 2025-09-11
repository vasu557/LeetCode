class Solution {
public:
    string removeKdigits(string num, int k) {
        int n = num.length();
        if(n == k) return "0";
        stack<char>st;
        string ans="";
        st.push(num[0]);
        int count =0;
        for(int i=1;i<n;i++){
            while(!st.empty() && count < k && st.top() > num[i]){
                st.pop();
                count++; 
            }
            st.push(num[i]);
        }
        while(count<k && !st.empty()){
            st.pop();
            count++;
        }
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        while(ans.size() > 1 && ans[0] == '0'){
            ans.erase(0,1);
        }
        return ans;
    }
};