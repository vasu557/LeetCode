class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string>vec;
        int n = pattern.length();;
        int count=0;
        stringstream ss(s);
        string word;
        while(ss >> word){
            vec.push_back(word);
            count++;
        }
        if(n != count) return false;
        unordered_map<char,string>mp;
        unordered_map<string,char>mp2;
        for(int i=0;i<n;i++){
            if(mp.count(pattern[i])){
                if(mp[pattern[i]] != vec[i])
                return false; 
            }else{
            mp[pattern[i]] = vec[i];
            }

            if(mp2.count(vec[i])){
                if(mp2[vec[i]] != pattern[i])
                return false;
            }
                else{
                mp2[vec[i]] = pattern[i];
            }
        }
    return true; 
    }
};