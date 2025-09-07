class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int>vec;
        if(1 & n){
            vec.push_back(0);
            for(int i=1;i<= n/2;i++){
                vec.push_back(i);
                vec.push_back(-i);
            }
        }
        else{
            for(int i=1;i<=n/2;i++){
                vec.push_back(i);
                vec.push_back(-i);
            }
        }
    return vec;
    }
};