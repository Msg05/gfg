class Solution {
  public:
    // Function to remove duplicates from the given sorted array.
    vector<int> removeDuplicates(vector<int> &arr) {
        int n = arr.size();
        if (n == 0) return {};

        int i = 0;
        for (int j = 1; j < n; j++) {
            if (arr[i] != arr[j]) {
                i++;
                arr[i] = arr[j];
            }
        }

        // Resize the array to contain only unique elements
        arr.resize(i + 1);
        return arr;
    }
};
