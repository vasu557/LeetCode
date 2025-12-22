class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int count=0;
        for(int i=0;i<strs[0].size();i++){
            vector<char>temp;
            for(int j=0;j<strs.size();j++){
                temp.push_back(strs[j][i]);
            }
            if(!(is_sorted(temp.begin(),temp.end())))
            count+=1;
        }
        return count;
    }
};