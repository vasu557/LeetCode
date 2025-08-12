class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int n=nums.size();
        int maxi=nums[0];
        for(int i=1;i<n;i++){
            if(nums[i]>maxi){
                maxi=nums[i];
            }
        }
        int c = count(nums.begin(),nums.end(),maxi);
        if(k > c){
            return 0;
        }
    int l=0,r=0;
    long long ans=0;
    long long temp=0;
    while(r<n){
        if(nums[r] == maxi){
            temp+=1;
        }
        while(temp == k){
            ans+= 1+(n-1-r);
            if(nums[l] == maxi)
            temp-=1;
            l++;
        }
        r++;
    }
    return ans;
    }
};