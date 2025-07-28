// User function template for C++
class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        int n = arr.size();
        int j = -1;

        // Step 1: Find the first zero
        for (int i = 0; i < n; i++) {
            if (arr[i] == 0) {
                j = i;
                break;
            }
        }

        // If no zeros found, nothing to do
        if (j == -1) return;

        // Step 2: Swap non-zero elements ahead with zero at j
        for (int i = j + 1; i < n; i++) {
            if (arr[i] != 0) {
                swap(arr[i], arr[j]);
                j++;
            }
        }
    }
};


/*
Get the size of the array n.
Declare pointer j. It will store the index of the first zero found in the array.

1st loop :
Scans from the beginning of the array.
As soon as it finds a 0, it saves its index in j and breaks.
So now j points to the first zero.

If j is still -1, that means no zero was found.So, the array is already fine — return early.


2nd loop does the real work:
Start from i = j + 1 → just after the first zero.
If arr[i] is non-zero:
Swap it with arr[j] (the earlier zero).
Move j to the next position (j++), so the next zero (if any) can be swapped.
*/