class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            if(nums[i] == 2)
             nums[i] = -1;
            else{
                int count=1;
                int temp = nums[i];
                while(temp % 2 != 0){
                   count*=2;
                   temp = temp >> 1;
                }
                count  = count /2;
                nums[i] =  nums[i]-count;
            }
        }
        return nums;
    }
};