class Solution {
public:
    string reverseWords(string s) {
        vector<string>vec;
        stringstream ss(s);
        string word;
        while(ss >> word){
            vec.push_back(word);
        }
        string ans="";
        int n=vec.size();
        for(int i=n-1;i>=0;i--){
            ans+=vec[i];
            ans+=" ";
        }
        if(ans[ans.size()-1]== ' ')
          ans.pop_back();
    return ans;
    }
};