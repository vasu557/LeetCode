class Solution {
public:
    string largestGoodInteger(string num) {
        string ans="";
        int n=num.length();
        if(n < 3) return ans;
        int l=0,r=1;
        while(r < n){
            if(num[l] != num[r])
             l=r;

            if(num[l] == num[r] && r-l == 2){
                string temp = num.substr(l,3);
                if(temp>ans) ans=temp;
            }
            r++;
        }
    return ans;
    }
};