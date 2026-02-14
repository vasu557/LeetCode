class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n=nums.size();
        int j=0;
        int count=0;
        for(int i=0;i<n;i++){
            if(nums[i] != val){
                nums[j] = nums[i];
                j++;
            }
            else count++;
        }
        while(count){
            nums.pop_back();
            count--;
        }
        return nums.size();
    }
};