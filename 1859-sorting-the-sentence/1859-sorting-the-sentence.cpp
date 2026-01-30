class Solution {
public:
    string sortSentence(string s) {
        string ans = "";
        unordered_map<int,string>mp;
        stringstream ss(s);
        string word;
        while(ss >> word){
            int n=word.length();
            mp[word[n-1]-'0'] = word.substr(0,n-1);
        }
        for(int i=1;i<=mp.size();i++){
            ans += mp[i];
            ans+=" ";
        }
        ans.pop_back();
        return ans;
    }
};