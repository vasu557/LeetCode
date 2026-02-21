class Solution {
public:
   void myFunction(int ind,vector<int>&candidates,int target,vector<int>&temp,vector<vector<int>>&vec){
    if(target == 0){
         vec.push_back(temp);
         return;
    }
    if(ind == candidates.size() || candidates[ind] > target) return;
        
    temp.push_back(candidates[ind]);
     myFunction(ind+1,candidates,target-candidates[ind],temp,vec);
     temp.pop_back();
    
    int next = ind+1;
    while(next < candidates.size() && candidates[ind]==candidates[next]){
        next++;
    }
        myFunction(next,candidates,target,temp,vec);

    }
  
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>>vec;
        vector<int>temp;
        myFunction(0,candidates,target,temp,vec);
       

        return vec;

    }
};