class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        vector<bool>vec;
        int ans=0;
        for(int i=0;i<nums.size();i++){
           if(nums[i] == 0)
           ans = ans * 2 % 5;
           else ans = (ans*2 +1) % 5;


           if(ans% 5 == 0) vec.push_back(true);
           else vec.push_back(false);
        }
        return vec;
    }
};