class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        // unordered_se<int>st;
        // vector<int>vec;
        // for(auto it :nums){
        //     if(st.find(it) == st.end()){
        //         vec.push_back(it);
        //     }
        // }

        vector<int>vec;
        for(int i=0;i<nums.size();i++){
            if(vec.empty() || vec.back() != nums[i]){
                vec.push_back(nums[i]);
            }
        }
        if(vec.size() <= 1) return true;
        if(vec[1] > vec[0]){
            for(int i=1;i<nums.size();i++)
            if(nums[i] <nums[i-1])
            return false;
        }
        else{
            for(int i=1;i<nums.size();i++){
                if(nums[i]>nums[i-1])
                return false;
            }
        }
        return true;
    }
};