class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int count =0;
        int total=0;
        for(int i=0;i<nums.size();i++){
            total +=nums[i];
        }
        return total % k;


    }
};