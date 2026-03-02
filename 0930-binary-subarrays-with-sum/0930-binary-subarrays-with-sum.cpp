class Solution {
public:
    int  atmost(vector<int>&nums,int goal){
        int sum=0;
        int n=nums.size();
        int l=0,r=0;
        int count=0;
        while(r < n){
            if(nums[r] == 1)
            sum+=1;
            while(sum > goal && l<=r){
                if(nums[l] == 1)
                sum-=1;

                l++;
            }
            if(sum <=goal){
                count+=r-l+1;
            }
            r++;
        }
        return count;
    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return atmost(nums,goal) - atmost(nums,goal-1);
    }
};