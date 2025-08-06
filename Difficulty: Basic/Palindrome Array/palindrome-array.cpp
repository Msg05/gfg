class Solution {
  public:
    bool isPerfect(vector<int> &arr) {
        int i = 0;
        int j = arr.size() - 1;
        
        while (i < j) {
            if (arr[i] != arr[j]) {
                return false;   // If any mismatch found, it's not palindrome
            }
            i++;
            j--;
        }
        return true;  // All matched, array is palindrome
    }
};
