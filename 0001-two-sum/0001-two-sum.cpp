class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            int a = nums[i];
            int need = target - a;
            if(mp.find(need) != mp.end()){
                return {i,mp[need]};
            }
            mp[nums[i]] = i;
        }
    return {-1,-1};
    }
};