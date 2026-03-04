class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();

        vector<int>vec;
        vector<int>vec2;

        for(int i=0;i<m;i++){
            int sum=0;
            for(int j=0;j<n;j++){
                sum+=mat[i][j];
            }
            vec.push_back(sum);
        }

        for(int i=0;i<n;i++){
            int sum=0;
            for(int j=0;j<m;j++){
                sum+=mat[j][i];
            }
            vec2.push_back(sum);
        }

        int ans=0;

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(mat[i][j]==1 && vec[i]==1 && vec2[j]==1)
                    ans++;
            }
        }

        return ans;
    }
};