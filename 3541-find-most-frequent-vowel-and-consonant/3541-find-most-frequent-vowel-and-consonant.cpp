class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map<char,int>vol;
        unordered_map<char,int>con;
        vector<int>vec1;
        vector<int>vec2;
        int sum1=0;
        int sum2=0;
        int len = s.length();
        for(int i=0;i<len;i++){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
                vol[s[i]]++;
            }else{
                con[s[i]]++;
            }
        }
        if(vol.size() == 0){
            sum1=0;
            }
            else{
            int maxi = 0;
        for(auto it : vol){
           maxi = max(maxi,it.second);
        }
        sum1 = maxi;
        }
        if(con.size() == 0){
            sum2=0;
        }
        else{
            int maxi=0;
            for(auto it : con){
                maxi = max(maxi,it.second);
            }
            sum2 = maxi;
        }

        int res = sum1 + sum2;
        return res;
    }


};