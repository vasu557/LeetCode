class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        vector<vector<int>>res;
        int m = grid.size();
        int n=grid[0].size();
        vector<int>row1(m,0);
        vector<int>col1(n,0);
        vector<int>row0(m,0);
        vector<int>col0(n,0);
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j] == 0){
                row0[i] +=1;
                col0[j] +=1;
                }
                else{
                    row1[i] += 1;
                    col1[j] +=1;
                }
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                int dif = row1[i]+col1[j]-row0[i]-col0[j];
                grid[i][j] = dif;
            }
        }
        return grid;
    }
};