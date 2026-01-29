class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
       string l1="";
       string l2="";

       for(string s : word1){
        l1+=s;
       }
       for(string s : word2)
       {
        l2+=s;
       }
        return l1==l2;
    }
};