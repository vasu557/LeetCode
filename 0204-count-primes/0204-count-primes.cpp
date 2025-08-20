class Solution {
public:
    int countPrimes(int n) {
        vector<bool>vec(n,true);
       if(n<2) return 0;
        for(int i=2;i*i < n;i++){
            if(vec[i] == true){
            for(int j=i*i;j<n;j+=i){
                vec[j] = false;
            }
        }
        }
        int count=0;
    for(int i=2;i<n;i++){
        if(vec[i] == true){
            count+=1;
        }
    }
    return count;
    }
};