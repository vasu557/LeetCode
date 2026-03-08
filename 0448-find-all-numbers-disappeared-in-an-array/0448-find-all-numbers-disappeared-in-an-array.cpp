class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n=nums.size();
        vector<int>res;
        unordered_set<int>st(nums.begin(),nums.end());
        for(int i=1;i<=n;i++){
            if(!st.count(i))
            res.push_back(i);
        }
    return res;
    }
};