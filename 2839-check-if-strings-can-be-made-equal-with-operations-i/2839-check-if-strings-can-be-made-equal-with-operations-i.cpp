class Solution {
public:
    bool canBeEqual(string s1, string s2) {
        int i=0;
        if(s1 == s2 ) return true;
        while(i+2 < 4){
            if(s1[i] != s2[i])
            swap(s1[i],s1[i+2]);
            if(s1 == s2) return true;

            i++;
        }
    return false;
    }
};