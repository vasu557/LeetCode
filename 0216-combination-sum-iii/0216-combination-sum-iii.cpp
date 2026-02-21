class Solution {
public:
void myFunction(int ind,int k,int target,vector<int>&nums,vector<int>&temp,vector<vector<int>>&res){


    if(target == 0){
        if(temp.size()==k)
         res.push_back(temp);

         return;
    }
    
    if(ind == 9 || nums[ind]>target || temp.size()>k) return;

     
    temp.push_back(nums[ind]);
myFunction(ind+1,k,target-nums[ind],nums,temp,res);
    temp.pop_back();
    myFunction(ind+1,k,target,nums,temp,res);
}
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int>vec;
        for(int i=1;i<=9;i++){
            vec.push_back(i);
        }
        vector<vector<int>>res;
        vector<int>temp;
        myFunction(0,k,n,vec,temp,res);
        return res;
    }
};