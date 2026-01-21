class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            int temp=1;
            if(nums[i] == 2)
                nums[i] = -1;
            else{
                for(int j=1;j<nums[i];j++){
                    if((j | j+1 ) == nums[i]){
                      nums[i]=j;
                      break;
                    }
                }
            }
        }
    return nums;
    }
};