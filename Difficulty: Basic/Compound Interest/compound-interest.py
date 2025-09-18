import math

class Solution:
    def getCompundInterest(self, P, T, N, R):
        # Step 1: Calculate the rate per compounding period
        rate = R / (100 * N)
        
        # Step 2: Total number of times interest is compounded
        total_times = N * T
        
        # Step 3: Apply the compound interest formula
        amount = P * pow(1 + rate, total_times)
        
        # Step 4: Return the floor value
        return math.floor(amount)
