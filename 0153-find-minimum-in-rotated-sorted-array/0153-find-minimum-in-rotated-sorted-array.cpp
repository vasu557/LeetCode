class Solution {
public:
    int findMin(vector<int>& nums) {
    int mini = INT_MAX;
    int  n= nums.size();
	int low=0,high = n-1;
	while(low <= high){
	    int mid = (low +high )/2;
	    if(nums[low] <= nums[mid]){
	        mini = min(mini,nums[low]);
	        low = mid+1; // checking right part
	    }
	    else if(nums[mid] <= nums[high]){
	        mini = min(nums[mid],mini);
	        high = mid-1; // right part completed so got toleft part
	    }
	}
    return mini;
    }
};