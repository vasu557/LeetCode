class Solution {
public:
bool myFunction(int x){
        while(x > 0){
            int r = x % 10;
            if(r == 0) return false;
            x = x/10;
        }
    return true;
} 
    vector<int> getNoZeroIntegers(int n) {
        vector<int>vec;
        for(int i=1;i<=n;i++){
           if(myFunction(i) && myFunction(n-i)){
            vec.push_back(i);
            vec.push_back(n-i);
            break;
           }
        }
    return vec;
    }
};