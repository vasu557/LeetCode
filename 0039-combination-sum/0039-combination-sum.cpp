class Solution {
public:
void myFunction(int ind,vector<int>&canditates,int &target,vector<vector<int>>&vec,vector<int>&temp){

    if(ind == canditates.size()){
        if(target == 0)
        vec.push_back(temp);
        return;
    }

    if(canditates[ind]<=target){
        temp.push_back(canditates[ind]);
        target-=canditates[ind];
        myFunction(ind,canditates,target,vec,temp);
        target+=temp.back();
        temp.pop_back();
    }
    
     myFunction(ind+1,canditates,target,vec,temp);


}
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>vec;
        vector<int>temp;
        myFunction(0,candidates,target,vec,temp);

        return vec;
    }
};