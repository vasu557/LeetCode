class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        int count=0;
        int temp=0;
        for(int i=0;i<nums.size()-1;i++){
           temp+=nums[i];
           int res = temp - (sum -temp);
           if(abs(res) % 2 == 0)
           count+=1;
        }
        return count;
    }
};