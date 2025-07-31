class Solution:
    def greatestOfThree(self, a, b, c):
        # Using conditional statements
        if a >= b and a >= c:
            return a
        elif b >= a and b >= c:
            return b
        else:
            return c
