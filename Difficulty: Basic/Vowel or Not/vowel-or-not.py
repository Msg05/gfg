class Solution:
    def isVowel(self, c: str) -> str:
        if c.lower() in ['a', 'e', 'i', 'o', 'u']:
            return "YES"
        else:
            return "NO"
