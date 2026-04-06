class Solution:
    def validPalindrome(self, s: str) -> bool:
        n = len(s)
        name=""
        for i in range(n) :
            if s[i] != s[n-1-i]:
                name=s[i:n-i]
                break


        if name == "":
            return True
        

        if name[1:] == name[1:][::-1] or name[:len(name)-1] == name[:len(name)-1][::-1]:
          return True
        


        return False;