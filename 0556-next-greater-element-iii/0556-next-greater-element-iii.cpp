class Solution {
public:
    int nextGreaterElement(int n) {
        int index=-1;
        string s = to_string(n);
        int size = s.length();
        for(int i=size-2;i>=0;i--){
            if(s[i] < s[i+1]){
                index=i;break;
            }
        }
        if(index == -1) return -1;
        
            for(int i=size-1;i>index;i--){
                if(s[i] > s[index]){
                    swap(s[index],s[i]);
                    break;
                }
            }
        sort(s.begin()+index+1,s.end());
        long long ans = stoll(s);
        return (ans>INT_MAX ? -1 : ans);
    }
};