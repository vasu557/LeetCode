class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            if(nums[i] % 3 != 0)
              mp[nums[i] % 3]++;
        }
        int ans=0;
        if(mp[1] == mp[2]){
            ans = mp[1] + mp[2];
        }
        else if(mp[1]>mp[2]){
            ans = 2 * mp[2] + (mp[1] - mp[2]);
        }
        else{
            ans = 2 * mp[1] + (mp[2] - mp[1]);
        }
        return ans;
    }
};