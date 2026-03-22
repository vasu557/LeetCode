class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        int m = mat.size();
        int n = mat[0].size();
        vector<vector<int>>temp = mat;
        for(int i=0;i<4;i++){
            if(temp == target)  return true;

            for(int i=0;i<m;i++){
                for(int j=0;j<n;j++){
                    temp[i][j] = mat[j][n-1-i]; 
                }
            }
            mat = temp;
        }
    return false;
    }
};