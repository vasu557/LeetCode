class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n = gain.size();
        vector<int>ans;
        ans.push_back(0);
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=gain[i];
            ans.push_back(sum);
        }
        int maxi = ans[0];
        for(int i=1;i<ans.size();i++){
            if(ans[i] > maxi)
            maxi = ans[i];
        }
    return maxi;
    }
};