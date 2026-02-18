class Solution {
public:

void myFunction(int ind,vector<vector<int>>&vec,vector<int>&nums,int n,vector<int>&temp){
if(ind == n){
vec.push_back(temp);

return;
}
myFunction(ind+1,vec,nums,n,temp);
temp.push_back(nums[ind]);
myFunction(ind+1,vec,nums,n,temp);
temp.pop_back();

}
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>vec;
        vector<int>temp;
        int n=nums.size();
        myFunction(0,vec,nums,n,temp);
        return vec;
    }
};