class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int n=nums.size();
        if(n == 1) return 0; 
        int left =-1;
        for(int i=1;i<n;i++){
            if(nums[i] < nums[i-1]){
                left = i-1;
                break;
            }

        }
        int right = -1;
        for(int i=n-1;i>0;i--){
            if(nums[i] < nums[i-1]){
                right = i;
                break;
            }
        }
        if(left == -1 || right == -1)
        return 0;

        int mini = INT_MAX;
        int maxi = INT_MIN;
        for(int i=left;i<=right;i++){
            mini = min(mini,nums[i]);
            maxi = max(maxi,nums[i]);
        }
            while(left > 0 && nums[left-1] > mini)
            left --;

            while(right < n-1 && nums[right+1]<maxi)
            right++;
           int ans =right - left+1;
        return ans;
    }
}; 