class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int>vec;
        long long res=1;
        vec.push_back(1);
        for(int i=1;i<=rowIndex;i++){
            res = res * (rowIndex+1  - i);
            res = res/i;
            vec.push_back(res);
        }
        return vec;
    }
};