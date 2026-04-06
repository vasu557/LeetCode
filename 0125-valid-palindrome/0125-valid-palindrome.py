class Solution:
    def isPalindrome(self, s: str) -> bool:
        temp = ''.join(ch.lower() for ch in s if (ch.isalnum()))
        return temp == temp[::-1];