class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n=nums.size();
        int l=0,r=0,maxi=0;
        int count=0;
        while(r < n){
          if(nums[r] == 0){
            count+=1;
          }
          while(count>k){
            if(nums[l] == 0){
            count--;
            }
            l++;
          }
          if(count <= k){
            int len = r-l+1;
            maxi=max(maxi,len);
          }
        r++;
        }
    return maxi;
    }
};