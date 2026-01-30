class Solution {
public:
    string capitalizeTitle(string title) {
        string ans ="";
        stringstream ss(title);
        string word;
        while(ss >> word){
            for(int i=0;i<word.length();i++){
                word[i] = tolower(word[i]);
            }
            if(word.length() > 2)
            word[0] = toupper(word[0]);

            ans += word+" ";
        }
        ans.pop_back();
        return ans;
    }
};