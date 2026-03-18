class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxi = INT_MIN;
        int n=accounts.size();
        for(int i=0;i<n;i++){
            int k =accounts[i].size();
            int sum=0;
            for(int j=0;j<k;j++){
                sum+=accounts[i][j];
            }
            maxi = max(maxi,sum);
        }
    return maxi;
    }
};