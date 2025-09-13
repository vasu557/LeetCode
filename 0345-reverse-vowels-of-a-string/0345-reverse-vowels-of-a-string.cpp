class Solution {
public:
    string reverseVowels(string s) {
        vector<int>vec;
        for(int i=0;i<s.length();i++){
            if(s[i] =='a' || s[i] =='e' || s[i] =='i' || s[i] =='o' || s[i] =='u' || 
            s[i] =='A' || s[i] =='E' || s[i] =='I' || s[i] =='O' || s[i] =='U' ){
                vec.push_back(s[i]);
            }
        }
        if(vec.empty()) return s;
        int k=0;
        for(int i=s.length()-1;i>=0;i--){
            if(s[i] =='a' || s[i] =='e' || s[i] =='i' || s[i] =='o' || s[i] =='u' || 
            s[i] =='A' || s[i] =='E' || s[i] =='I' || s[i] =='O' || s[i] =='U' ){
                s[i]=vec[k];
                k++;
            }
        }
    return s;
    }
};