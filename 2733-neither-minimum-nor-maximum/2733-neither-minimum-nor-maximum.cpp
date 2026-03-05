class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        int maxi = INT_MIN;
        int mini = INT_MAX;
        int ans=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i] < mini)
            mini = nums[i];

            if(nums[i] > maxi)
             maxi = nums[i];
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i] != mini && nums[i] != maxi){
                ans = nums[i];
                break;
            }
        }
        return ans;
    }
};