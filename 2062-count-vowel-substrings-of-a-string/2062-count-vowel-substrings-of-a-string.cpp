class Solution {
public:
    int countVowelSubstrings(string word) {
     int n=word.length();
     int count=0;
     for(int i=0;i<n;i++){
        unordered_map<char,int>mp;
        for(int j=i;j<n;j++){

            if(word[j] == 'a' || word[j] == 'e' ||
              word[j] == 'i'  || word[j] == 'o' || word[j] == 'u'){
                mp[word[j]]++;
              }
              else{
                break;
              }

            if(mp.size() == 5)
            count++;

        }
     } 
     return count;  
    }
};