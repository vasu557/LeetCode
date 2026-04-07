class Solution {
public:
    bool judgeCircle(string moves) {
        unordered_map<char,int>mp;
        for(int i=0;i<moves.length();i++){
            mp[moves[i]]++;
        }
        return (mp['L'] == mp['R'] && mp['U'] == mp['D']);
    }
};