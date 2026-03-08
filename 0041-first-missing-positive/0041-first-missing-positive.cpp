class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int ind=-1;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(nums[i] > 0){
                ind=i;
                break;
            }
        }
        if(ind == -1) return 1;
        int k=1;
        int ans=0;
        for(int i=ind;i<nums.size();i++){
            if(nums[i] == k){
                k++;
            }
        
        }
    return k;
    }
};