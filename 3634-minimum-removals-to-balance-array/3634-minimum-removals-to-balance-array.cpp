class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        
        int n=nums.size();
        if(n == 1) return 0;
         int l=0,r=0;
         int count=0;
         while(r < n){
            while( (long long)nums[l] * k < nums[r]){
                l++;

            }
            count =max(count,r-l+1);
            r++;
         }

         int ans = n - count;
         return ans;

    }
};