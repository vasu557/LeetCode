class Solution {
public :
void myFunction(int row,vector<vector<int>>&ans){
    vector<int>temp;
    temp.push_back(1);
    int res=1;
    for(int col=1;col<row;col++){
        res = res * (row-col);
        res = res/col;
        temp.push_back(res);
    }
    ans.push_back(temp);
}
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;
        for(int i=1;i<=numRows;i++){
            myFunction(i,ans);
        }
        return ans;

    }
};