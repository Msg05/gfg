class Solution:
    def gcd(self, a, b):
        # Euclidean Algorithm
        while b != 0:
            a, b = b, a % b   # Step 1: Replace (a, b) with (b, remainder of a/b)
        return a              # Step 2: When b becomes 0, a is the GCD
