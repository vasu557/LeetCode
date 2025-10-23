class Solution {
public:
    bool hasSameDigits(string s) {
        vector<int>vec;
        for(int i=0;i<s.length();i++){
            vec.push_back(s[i]-'0');
        }
        int n=vec.size();
        while(n > 2){
            for(int i=0;i<n-1;i++){
                vec[i]=(vec[i]+vec[i+1]) % 10;
            }
            n--;
        }
       return vec[0]==vec[1]; 
    }
};