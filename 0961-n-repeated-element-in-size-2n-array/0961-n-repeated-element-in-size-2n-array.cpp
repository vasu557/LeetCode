class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int n=nums.size()/2;
        int ans=-1;
        unordered_map<int,int>mp;
        for(auto it:nums){
            mp[it]++;
        }
        for(auto it:mp){
            if(it.second == n){
            ans=it.first;
            break;
            }
        }
        return ans;
    }
};