class Solution {
public:
    int minOperations(vector<int>& nums) {
        int ans=0;
        unordered_map<int,int>mp;
        for(auto it:nums){
            mp[it]++;
        }
        for(auto it : mp){
            if(it.second == 1) return -1;
            if(it.second % 3 == 0)
               ans+=it.second/3;
            else if(it.second % 3 == 1 && it.second != 1){
                it.second = it.second-4;
                ans+= (it.second / 3) + 2;
            }
            else  if(it.second % 3 ==2 ){
                it.second = it.second -2;
                ans+= (it.second / 3) + 1;
            }
        }
    return ans;
    }
};