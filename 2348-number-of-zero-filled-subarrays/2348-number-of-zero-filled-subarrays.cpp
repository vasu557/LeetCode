class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        int n=nums.size();
        long long count=0;
        int l=0,r=0;
        while(r < n){
            if(nums[l] != 0){
                l++;
                r++;
            }
            else if(nums[l] == 0){
                int sum=0;
                while(r < n && nums[r] == 0){
                    sum+=1;
                    r++;
                }
                l =r;
                count += (1LL * sum * (sum+1)) /2;
            }
        }
    return count;
    }
};