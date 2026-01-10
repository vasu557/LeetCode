class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        vector<vector<int>>vec;
        int m = matrix.size();
        int n=matrix[0].size();
        for(int i=0;i<n;i++){
            vector<int>temp;
            for(int j=0;j<m;j++){
                temp.push_back(matrix[j][i]);
            }
            reverse(temp.begin(),temp.end());
            vec.push_back(temp);
        }
        matrix = vec;
    }
};