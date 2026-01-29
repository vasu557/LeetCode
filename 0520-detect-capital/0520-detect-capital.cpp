class Solution {

public:
    bool isAllUpper(string word){
        for(char c : word){
            if(islower(c))
            return false;
        }
        return true;
    }
    bool isAllLower(string word){
        for(char c : word){
            if(isupper(c))
            return false;
        }
        return true;
    }
    bool detectCapitalUse(string word) {
        if(isAllUpper(word)) return true;
        if(isAllLower(word)) return true;
        if(word[0]>=65 && word[0]<=90){
            for(int i=1;i<word.length();i++){
                if(isupper(word[i]))
                return false;
            }
        }
        else{
            return false;
        }
          return true;

    }
};