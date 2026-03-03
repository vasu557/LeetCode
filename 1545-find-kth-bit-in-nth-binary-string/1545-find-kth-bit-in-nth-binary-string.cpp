class Solution {
public:
string invert(string s){
    for(int i=0;i<s.length();i++){
        if(s[i] == '1'){
            s[i] = '0';
        }
        else{
            s[i] = '1';
        }
    }
    return s;
}
    char findKthBit(int n, int k) {
        if(n == 1 && k == 1)
             return '0';
        string ans="";
        string s1="0";
        for(int i=1;i<n;i++){
            string temp = invert(s1);
            reverse(temp.begin(),temp.end());
            ans =s1+"1"+temp;
            s1 = ans;
        }
        
    return ans[k-1];
    }
};