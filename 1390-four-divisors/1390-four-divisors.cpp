class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<nums.size();i++){
            int count=0;
            int temp=0;
            for(int j=1;j<=sqrt(nums[i]);j++){
                if(nums[i] % j == 0 ){
                    if(j == nums[i]/j){
                     count+=1;
                     temp+=j;
                    }
                    else{
                     count+=2; 
                     temp+=j;
                     temp+= nums[i]/j;
                    }
                }
            }
             if(count == 4)
                 ans+=temp;
        }
        return ans;
    }
};