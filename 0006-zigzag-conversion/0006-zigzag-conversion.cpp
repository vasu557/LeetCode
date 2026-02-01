class Solution {
public:
    string convert(string s, int numRows) {
        
        if(numRows == 1){
            return s;
        }
        vector<string>rows(numRows);
        int cur =0;
        bool down = true;
        for(char c : s){
           rows[cur] += c; 
           if(cur ==0)
           down = true;
           else if(cur == numRows-1)
           down = false;
           cur += down ? 1 : -1;
        }
        string ans="";
        for(string r : rows){
            ans += r;
        }
        return ans;
    }
};