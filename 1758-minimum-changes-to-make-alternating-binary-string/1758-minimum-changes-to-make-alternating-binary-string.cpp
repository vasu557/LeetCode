class Solution {
public:
    int minOperations(string s) {
        string temp ="";
        string temp2="";
        for(int i=0;i<s.length();i++){
            if(i % 2 ==0){
                temp+='0';
                temp2+='1';
            }
            else{
                temp+='1';
                temp2+='0';
            }
        }
            
        
        int count=0;
        int count2=0;
        for(int i=0;i<s.length();i++){
            if(s[i] != temp[i])
            count+=1;
            if(s[i] != temp2[i])
            count2+=1;
        }
    return min(count,count2);
    }
};