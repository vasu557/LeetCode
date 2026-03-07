class Solution {
public:
    int minFlips(string s) {
        int n=s.length();
        string temp1="";
        string temp2="";
        int mini =INT_MAX;
        for(int i=0;i<2*n;i++){
            if(i%2 == 0){
                temp1+='0';
                temp2+='1';
            }
            else{
                temp1+='1';
                temp2+='0';
            }
        }
        int c1=0,c2=0;
        int l=0;
        int r=0;
        // for(int i=0;i<n;i++){
        //     if(s[i] != temp1[i])
        //     c1+=1;

        //     if(s[i] != temp2[i])
        //     c2+=1;

        //     if()
        // }
        string t = s+s;
        while(r < 2*n){
            if(t[r] !=temp1[r])
            c1+=1;
            if(t[r] != temp2[r])
            c2+=1;
            if(r-l+1 > n){
                if(t[l] != temp1[l])
                c1-=1;
                if(t[l] !=  temp2[l])
                c2-=1;

                l++;
            }
            if(r-l+1 == n)
            mini = min(mini,min(c1,c2));

            r++;
        }
        return mini;
    }
};