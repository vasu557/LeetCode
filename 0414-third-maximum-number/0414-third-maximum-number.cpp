class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int count=0;
        int th=0;
        for(int i=nums.size()-1;i>0;i--){
            if(nums[i-1] != nums[i]){
                count++;
            }
            if(count == 2){
                th = nums[i-1];
                break;
            }
        }
        return count == 2 ? th : nums[nums.size()-1];
    }
};