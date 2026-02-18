class Solution {
public:

void myFunction(int ind,vector<int>&temp,vector<vector<int>>&vec,vector<int>&nums,int n){
        if(ind == n){
            vec.push_back(temp);
            return ;
        }
myFunction(ind+1,temp,vec,nums,n);
temp.push_back(nums[ind]);
myFunction(ind+1,temp,vec,nums,n);
temp.pop_back();


}


    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
      vector<vector<int>>vec;
      int n=nums.size();
      vector<int>temp;
      sort(nums.begin(),nums.end());
      myFunction(0,temp,vec,nums,n);
      sort(vec.begin(),vec.end());
      vec.erase(unique(vec.begin(),vec.end()),vec.end());

      return vec;
    }
};