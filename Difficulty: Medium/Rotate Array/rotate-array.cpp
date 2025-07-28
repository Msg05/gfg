class Solution {
  public:

    // Function to rotate an array by d elements in counter-clockwise direction.
    void rotateArr(vector<int>& arr, int d) {
        int n = arr.size();
        d = d % n;  // handle case when d > n

        // Step 1: Reverse first d elements
        reverse(arr.begin(), arr.begin() + d);

        // Step 2: Reverse remaining n - d elements
        reverse(arr.begin() + d, arr.end());

        // Step 3: Reverse the whole array
        reverse(arr.begin(), arr.end());
    }
};