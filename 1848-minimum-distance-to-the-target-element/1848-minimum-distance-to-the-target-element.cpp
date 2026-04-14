class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        // int pos = -1;
        // auto it = find(nums.begin(),nums.end(),target);
        // if(it != nums.end())
        //   pos = it - nums.begin();
        
        // int ans = abs(pos - start);
        // return ans;
        int ans = INT_MAX;
        for(int i=0;i<nums.size();i++){
            if(nums[i] == target){
                ans = min(ans,abs(i - start));
            }
        }
    return ans;
    }
};