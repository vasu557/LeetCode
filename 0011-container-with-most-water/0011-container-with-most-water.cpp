class Solution {
public:
    int maxArea(vector<int>& height) {
        int n =height.size();
        int l=0,h=n-1;
        int maxi = 0;
        while(l < h){
            int len= h-l;
            int wid = min(height[l],height[h]);
            int area= len*wid;
            maxi = max(area,maxi);
            if(height[l]>height[h]) h--;
            else l++;
        }
    return maxi;  
    }
};