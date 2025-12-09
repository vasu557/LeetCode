class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int,int>mp;
        // vector<int>ans;
        for(int i=0;i<numbers.size();i++){
            int a = numbers[i];
            int req = target - a;
            if(mp.find(req) != mp.end()){
                // ans.push_back(mp[req]);
                // ans.push_back(i+1);
                return {mp[req] , i+1};
            }
            mp[numbers[i]] = i+1;
        }
        return {};
    }
};