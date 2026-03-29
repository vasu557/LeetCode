class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n=nums.size();
        vector<int>left(n,0);
        vector<int>right(n,0);
        int le=0,ri=0;
        for(int i=0;i<n;i++){
            le += nums[i];
            left[i]=le;
        }
        for(int i=n-1;i>=0;i--){
            ri += nums[i];
            right[i] = ri;
        }
        for(int i=0;i<n;i++){
            nums[i] = abs(left[i] - right[i]);
        }
    return nums;
    }
};