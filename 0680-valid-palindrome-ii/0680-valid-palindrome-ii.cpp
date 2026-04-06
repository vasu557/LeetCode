class Solution {
public:
    bool validPalindrome(string s) {
        int l=0,r=s.length()-1;
        while(l<r){
            if(s[l] == s[r]){
                l++;
                r--;
            }else{
                break;
            }
        }
        if(l >= r) return true;
        int k=r-l+1;
        string temp1 =  s.substr(l+1,k-1);
        bool ok =true;
        for(int i =0;i<temp1.length()/2;i++){
            if(temp1[i] != temp1[temp1.length()-1-i])
            {
                ok=false;
                break;
            }
        }
        if(ok) return true;
        string temp2 = s.substr(l,k-1);
        ok = true;
        for(int i =0;i<temp2.length()/2;i++){
            if(temp2[i] != temp2[temp2.length()-1-i])
            {
                ok=false;
                break;
            }
        }

    if(ok) return true;

        return false;
    }
};