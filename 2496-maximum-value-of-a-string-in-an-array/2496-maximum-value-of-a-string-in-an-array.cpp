class Solution {
public:
    int maximumValue(vector<string>& strs) {
        int n=strs.size();
        int maxi = INT_MIN;
        for(int i=0;i<n;i++){
            bool found = true;
            for(int j=0;j<strs[i].length();j++){
                if(!isdigit(strs[i][j])){
                    maxi = max(maxi,(int)strs[i].length());
                    found = false;
                    break;
                }
            }
            if(found){
                    string temp = strs[i];
                    int val=0;
                    for(char c: temp){
                        val = val * 10 + (c-'0'); 
                    }
                    maxi = max(maxi,val);
                }
        }
    return maxi;
    }
};