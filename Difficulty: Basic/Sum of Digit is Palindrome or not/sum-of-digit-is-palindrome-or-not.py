class Solution:
    def isDigitSumPalindrome(self, n):
        # Step 1: Find sum of digits
        digit_sum = 0
        while n > 0:
            digit_sum += n % 10
            n //= 10
        
        # Step 2: Reverse the digit_sum mathematically
        original = digit_sum
        reverse_num = 0
        while digit_sum > 0:
            reverse_num = reverse_num * 10 + digit_sum % 10
            digit_sum //= 10
        
        # Step 3: Compare original with reversed
        return original == reverse_num
