class Solution:
    def isBinary(self, s):
        # Check if all characters are either '0' or '1'
        for char in s:
            if char not in ('0', '1'):
                return False
        return True
