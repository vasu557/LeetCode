class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int l=0;
        while(l<nums.size()){
            if(nums[l] == 1){
                for(int i=l+1;i<nums.size();i++){
                    if( nums[i] == 1 && i - l -1 < k) {
                        return false;
                    }
                    else if(nums[i] == 1 && i-l-1>=k){
                       l=i;
                        i = nums.size();
                        l--;
                    }
                }
            }
            l++;
        }
        return true;
    }
};