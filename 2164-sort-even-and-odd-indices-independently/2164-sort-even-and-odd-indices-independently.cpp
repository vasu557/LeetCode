class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        vector<int>odd;
        vector<int>even;
        vector<int>ans;
        for(int i=1;i<nums.size();i+=2){
            odd.push_back(nums[i]);
        }
        sort(odd.begin(),odd.end(),greater<int>());
        for(int i=0;i<nums.size();i+=2){
            even.push_back(nums[i]);
        }
        sort(even.begin(),even.end());
        int n=nums.size();
        for(int i=0;i<min(odd.size(),even.size());i++){
            ans.push_back(even[i]);
            ans.push_back(odd[i]);
        }
        if(n%2 == 1) ans.push_back(even[even.size()-1]);
        return ans;
    }
};