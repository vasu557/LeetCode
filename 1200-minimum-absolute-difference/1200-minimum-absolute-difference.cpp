class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int mini = INT_MAX;
        for(int i=1;i<arr.size();i++){
            mini = min(mini,arr[i]-arr[i-1]);
        }
        vector<vector<int>>vec;
        unordered_map<int,int>mp;
        for(int i=0;i<arr.size();i++){
            int need = arr[i]-mini;
            if(mp.find(need) != mp.end()){
                vec.push_back({need,arr[i]});
                mp[need]--;
                if(mp[need] == 0){
                    mp.erase(need);
                }
            }
            mp[arr[i]]++;

        }
        return vec;

    }
};