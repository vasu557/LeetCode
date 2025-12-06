class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int>temp;
        for(int i=0;i<nums.size();i++){
            if(nums[i] != 0)
                temp.push_back(nums[i]);
        }
        int rem = nums.size()-temp.size();
        for(int i=0;i<rem;i++){
            temp.push_back(0);
        }
            nums =temp;
    }
};