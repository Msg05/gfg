// User function template for C++
class Solution {
  public:
    int search(int n, int arr[]) {
    
        int result = 0;

        // XOR all elements
        for(int i = 0; i < n; i++) {
            result = result^arr[i];
        }

        return result;  // The element that appears only once
    }
};
