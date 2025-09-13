class Solution {
public:
    string sortVowels(string s) {
        vector<int>vec;
        for(int i=0;i<s.length();i++){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'||
            s[i]=='A'|| s[i]=='E'|| s[i]=='I' || s[i]=='O' || s[i]=='U' ){
                vec.push_back(s[i]);
            }
        }
        if(vec.empty()) 
        return s;
        sort(vec.begin(),vec.end());
        int k=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'||
            s[i]=='A'|| s[i]=='E'|| s[i]=='I' || s[i]=='O' || s[i]=='U' ){
                s[i] = vec[k];
                k++;
            }
        }
        return s;
    }
};