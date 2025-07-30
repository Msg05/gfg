class Solution:
    def isEven(self, n):
        # Use modulus operator to check divisibility
        if n % 2 == 0:   # remainder is zero
            return True  # number is even
        else:
            return False # number is odd
