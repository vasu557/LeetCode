class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        string word;
        stringstream ss(text);
        int count=0;
        while(ss >> word){
            bool broken = false;
            for(int i=0;i<brokenLetters.length();i++){
                if(word.find(brokenLetters[i]) != string :: npos){
                broken = true;
                break;
                }
            }
            if(broken == false) count++;
        }
    return count;
    }
};