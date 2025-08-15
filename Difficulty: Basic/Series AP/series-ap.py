class Solution:
    def nthTermOfAP(self, a1: int, a2: int, n: int) -> int:
        # Find the common difference
        d = a2 - a1
        # Apply the AP nth term formula
        return a1 + (n - 1) * d
