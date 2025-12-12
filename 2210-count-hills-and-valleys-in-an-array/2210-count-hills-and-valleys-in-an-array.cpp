class Solution {
public:
    int countHillValley(vector<int>& nums) {
        vector<int>vec;
        int count=0;
        for(auto it : nums){
            if(vec.empty() || vec.back() != it){
                vec.push_back(it);
            }
        }
        int  n= vec.size();
        if(n == 1 || n== 2) return 0;
        for(int i=1;i<n-1;i++){
            if((vec[i] < vec[i-1] && vec[i] < vec[i+1]) || vec[i]>vec[i-1] && vec[i]>vec[i+1]){
                count+=1;
            }
        }
        return count;
    }
};