class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n =strs.size();
        vector<vector<string>>res;
        unordered_map<string,vector<string>>mp;
        for(int i=0;i<n;i++){
            string s = strs[i];
            sort(s.begin(),s.end());
            mp[s].push_back(strs[i]);
        }
        for(auto it:mp){
            res.push_back(it.second);
        }
    return res;
    }
};


















// class Solution {
// public:
//     vector<vector<string>> groupAnagrams(vector<string>& strs) {
//         int n=strs.size();
//         vector<bool>visited(n,false);
//         vector<vector<string>>pair;
//         for(int i=0;i<n;i++){
//             if(visited[i]) continue;
//             vector<string>st;
//             string s = strs[i];
//             sort(s.begin(),s.end());
//             for(int j=i;j<n;j++){
//                 if(visited[j]) continue;
//                 string s2 = strs[j];
//                 sort(s2.begin(),s2.end());
//                 if(s == s2){
//                     st.push_back(strs[j]);
//                     visited[j] = true;
//                 }
//             }
//             pair.push_back(st);
//         }
//     return pair;
//     }
// };