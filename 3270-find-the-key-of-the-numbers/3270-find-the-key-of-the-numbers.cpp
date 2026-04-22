class Solution {
public:
    int generateKey(int num1, int num2, int num3) {
        int ans=0;
        string n1 = to_string(num1);
        string n2 = to_string(num2);
        string n3 = to_string(num3);
        if(n1.size() < 4){
            int k=4 - n1.size();
            while(k){
                n1.insert(n1.begin(),'0');
                k--;
            }
        }
        if(n2.size() < 4){
            int k=4 - n2.size();
            while(k){
                n2.insert(n2.begin(),'0');
                k--;
            }
        }
        if(n3.size() < 4){
            int k=4 - n3.size();
            while(k){
                n3.insert(n3.begin(),'0');
                k--;
            }
        }
        for(int i=0;i<4;i++){
            int temp = min(n1[i]-'0',min(n2[i]-'0',n3[i]-'0'));
            ans = ans * 10 + temp;
        }
        return ans;
    }
};