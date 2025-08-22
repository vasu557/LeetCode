class Solution {
public:
    int countKConstraintSubstrings(string s, int k) {
        int n =s.length();
        int total = (n * (n+1))/2;
        int l=0,r=0;
        unordered_map<char,int>mp;
        int count=0;
        while(r < n){
            mp[s[r]]++;
            while(mp['0'] > k && mp['1'] >k){
                count+=(n-r);
                mp[s[l]]--;
                l++;
            }
            r++;
        }
        return total-count;
    }
};