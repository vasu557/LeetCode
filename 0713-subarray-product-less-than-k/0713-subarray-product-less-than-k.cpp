class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int l=0,r=0;
        int n=nums.size();
        int ans=0;
        int temp=1;
        while(r < n){
            temp = temp * nums[r];
            while(temp >= k && l<=r){
                temp = temp / nums[l];
                l++;
            }
            if(temp < k)
            ans+=r-l+1;

            r++;
        }
        return ans;
    }
};