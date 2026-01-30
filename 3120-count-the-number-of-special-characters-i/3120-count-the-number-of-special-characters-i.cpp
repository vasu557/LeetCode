class Solution {
public:
    int numberOfSpecialChars(string word) {
        int ans=0;
        unordered_set<char>st;
        unordered_set<char>st2;
        for(char c : word){
            if(islower(c))
               st.insert(c);
            else if(isupper(c))
               st2.insert(c);
        }
        for(char c : st){
            if(st2.count(toupper(c)))
            ans+=1;
        }
        return ans;



    }
};