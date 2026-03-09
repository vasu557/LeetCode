class Solution {
public:
    string removeKdigits(string num, int k) {
        int n=num.length();
        if(n == k) return "0";
        stack<char>st;
        for(int i=0;i<n;i++){
            while(!st.empty() && st.top()>num[i] && k){
                st.pop();
                k--;
            }
            st.push(num[i]);
        }
         while(k){
            st.pop();
            k--;
        }
        string ans="";
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        int i=0;
        while(i<ans.size() && ans[i]=='0'){
            i++;
        }
        return ans.substr(i) == "" ? "0" : ans.substr(i);
    }
};