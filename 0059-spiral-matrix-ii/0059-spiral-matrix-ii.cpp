class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int left=0,top=0;
        int right = n-1;
        int bottom = n-1;
        vector<vector<int>>vec(n,vector<int>(n,0));
        int temp=1;
        while(left <= right && top <= bottom){
            for(int i=left;i<=right;i++){
                vec[top][i] = temp;
                temp++;
            }
            top++;
            for(int i=top;i<=bottom;i++){
                vec[i][right] = temp;
                temp++;
            }
            right--;
            if(top <= bottom){
                for(int i=right;i>=left;i--){
                    vec[bottom][i] = temp;
                    temp++;
                }
                bottom--;
            }
            if(left <= right){
                for(int i=bottom;i>=top;i--){
                    vec[i][left] = temp;
                    temp++;
                }
                left++;
            }
        }
        return vec;
    }
};