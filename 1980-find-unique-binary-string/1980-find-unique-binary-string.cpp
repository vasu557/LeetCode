class Solution {
public:
void myFunction(int ind,string &temp,vector<string>&vec,int n){
if(ind == n){
    vec.push_back(temp);
    return ;
    }
temp.push_back('0');
myFunction(ind+1,temp,vec,n);
temp.pop_back();

temp.push_back('1');
myFunction(ind+1,temp,vec,n);
temp.pop_back();

}
    string findDifferentBinaryString(vector<string>& nums) {
        string temp="";
        vector<string>vec;
        int n=nums.size();
        myFunction(0,temp,vec,n);
        unordered_set<string>st(nums.begin(),nums.end());
        for(string s : vec){
            if(!st.count(s)){
                return s;
            }
        }
        return "";
    }
};