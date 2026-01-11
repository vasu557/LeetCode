class Solution {
public:
    int bestClosingTime(string customers) {
        int n = customers.length();
        int count=0;
        for(int i=0;i<n;i++){
            if(customers[i] == 'Y') 
                count++;
        }
        int mini = count;
        int ans=0;
        for(int i=0;i<n;i++){
            if(customers[i] == 'Y')
                count--;
             else 
                count++;


            if(count < mini){
                mini = count;
                ans=i+1;
            }
        }
        return ans;
        
    }
};