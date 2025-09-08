class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int n=nums.size();
        int sum=nums[0];
        unordered_set<int>st(nums.begin(),nums.end());
        for(int i=1;i<n;i++){
            if(nums[i] - nums[i-1] == 1){
                sum+=nums[i];
            }
            else{
                break;
            }
        }
    int temp = sum;
    while(st.find(temp) != st.end()){
        temp++;
    }
    return temp;
    }
};