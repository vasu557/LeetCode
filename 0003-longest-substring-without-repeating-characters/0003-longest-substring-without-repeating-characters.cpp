class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.empty()) return 0;
        int l=0,r=0;
        int count=0;
        int maxi = INT_MIN;
        int n=s.length();
        unordered_set<char>st;
        while(r < n){
            while(st.count(s[r])){
                st.erase(s[l]);
                l++;
            }

            maxi = max(maxi,r-l+1);
            
            st.insert(s[r]);
            r++;

        }
        return maxi;
    }
};