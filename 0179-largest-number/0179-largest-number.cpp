class Solution {
public:
 static bool cmp(string a,string b){
    return a+b > b+a;
 }
    string largestNumber(vector<int>& nums) {
        vector<string>st;
        for(auto it : nums){
            st.push_back(to_string(it));
        }
        sort(st.begin(),st.end(),cmp);
        string ans="";
        for(auto it : st){
            ans+=it;
        }
        return ans[0]=='0' ? "0" : ans;
    }
};