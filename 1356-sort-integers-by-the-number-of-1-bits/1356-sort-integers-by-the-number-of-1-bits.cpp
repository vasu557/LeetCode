class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        vector<pair<int,int>>vec;
        for(int i=0;i<arr.size();i++){
            int count=0;
            int num = arr[i];
            while(num>0){
                if(1&num)
                count+=1;

                num =num>>1;
            }
            vec.push_back({arr[i],count});
        }

        sort(vec.begin(),vec.end(),[](const auto &a,const auto &b){
            if(a.second == b.second)
            return a.first<b.first;
            return a.second<b.second;
        });
        vector<int>ans;
        for(auto it : vec){
            ans.push_back(it.first);
        }
        return ans;
    }
};