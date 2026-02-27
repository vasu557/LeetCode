class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        vector<int>vec1;
        vector<int>vec2(n,0);
        int sum=0;
        for(int i=0;i<nums.size();i++){
           sum+=nums[i];
           vec1.push_back(sum);
           
        }
        sum=0;
        for(int i=n-1;i>=0;i--){
           sum+=nums[i];
           vec2[i] = sum;    
        }
        for(int i=0;i<n;i++){
            int left = vec1[i]-nums[i];
            int right = vec2[i] - nums[i];
           if(left == right) return i;
        }
        return -1;
    }
};