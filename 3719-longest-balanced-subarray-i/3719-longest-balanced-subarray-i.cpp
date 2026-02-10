class Solution {
public:
    int longestBalanced(vector<int>& nums) {
        int n=nums.size();
        int maxi = 0;
        for(int i=0;i<n;i++){
            unordered_set<int>st;
            int odd=0,ev=0;
            for(int j=i;j<n;j++){
                if(!st.count(nums[j]) && nums[j] % 2 == 0){
                    ev++;
                }
                else if(!st.count(nums[j])){
                    odd++;
                }

                if(odd == ev){
                    maxi = max(maxi,j-i+1);
                }
                st.insert(nums[j]);
            
            }
        }
        return maxi;
    }
};