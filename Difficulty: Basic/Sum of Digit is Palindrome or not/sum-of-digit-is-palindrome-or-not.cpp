// User function Template for C++

class Solution {
  public:
    bool isDigitSumPalindrome(int n) {
        // Step 1: Calculate sum of digits
        int digit_sum = 0;
        int temp = n;
        while (temp > 0) {
            digit_sum += temp % 10;
            temp /= 10;
        }
        
        // Step 2: Check if digit_sum is palindrome
        int original = digit_sum;
        int rev = 0;
        while (digit_sum > 0) {
            rev = rev * 10 + (digit_sum % 10);
            digit_sum /= 10;
        }
        
        return original == rev;
    }
};
