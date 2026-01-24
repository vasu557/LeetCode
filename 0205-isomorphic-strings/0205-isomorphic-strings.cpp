class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char>mp;
        unordered_set<char>s1,s2;
        for(int i=0;i<s.length();i++){
            s1.insert(s[i]);
            s2.insert(t[i]);
        }
        if(s1.size() != s2.size())
        return false;

        for(int i=0;i<s.length();i++){
            if(mp.find(s[i]) == mp.end())
            mp[s[i]] = t[i];
            else{
                if(mp[s[i]] != t[i])
                return false;
        }
        }
    return true;
    }
};