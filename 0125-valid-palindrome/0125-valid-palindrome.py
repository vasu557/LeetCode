class Solution:
    def isPalindrome(self, s: str) -> bool:
        s=s.replace(" ","")
        temp =""
        for i in range(len(s)):
            if(s[i].isalnum()):
               temp+=s[i].lower()

        rev = temp[::-1]
        if temp == rev:
            return True;
        else:
           return False;