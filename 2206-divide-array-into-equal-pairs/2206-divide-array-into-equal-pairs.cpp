class Solution {
public:
    bool divideArray(vector<int>& nums) {
       bool ans=true;
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(auto it:mp){
            if(it.second % 2 ==1){
                ans=false;
            }
        }
        return ans;
    }
};