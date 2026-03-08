class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int ans = (n*(n+1))/2;
        int cur=0;
        for(int x : nums){
            cur+=x;
        }   
    return ans-cur;
    }
};