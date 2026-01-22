class Solution {
public:
    vector<int> grayCode(int n) {
        vector<int>res = {0,1,3,2};
        if(n==0) return {0};
        else if(n==1) return {0,1};
        else if(n==2) return res;
        else{
            for(int i=3;i<=n;i++){
                int si = res.size();
                for(int j=si-1;j>=0;j--){
                    res.push_back(si + res[j]);
                }
            }
        }
    return res;
    }
};