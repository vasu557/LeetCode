class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m = matrix[0].size();
        for(int i=0;i<n;i++){
           unordered_set<int>st1;
           unordered_set<int>st2;
            for(int j=0;j<m;j++){
               st1.insert(matrix[i][j]);
               st2.insert(matrix[j][i]);
            }
            if(st1.size() != n || st2.size() != n)
            return false;
        }
        return true;
    }
};