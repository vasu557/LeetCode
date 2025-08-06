class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        vector<int>res;
        if(nums.empty()) return res;
        for(int i=0;i<nums.size();i++){
            res.push_back(nums[i]%2);
        }
        sort(res.begin(),res.end());
        return res;
    }
};