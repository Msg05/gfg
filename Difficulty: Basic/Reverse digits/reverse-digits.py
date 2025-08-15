# User function Template for python3

class Solution:
    def reverseDigits(self, n):
        # Convert to string, reverse, then convert back to int
        return int(str(n)[::-1])
