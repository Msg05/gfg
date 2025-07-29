class Solution {
  public:
    int missingNum(vector<int>& arr) {

        int n = arr.size() + 1;
        int xor1 = 0, xor2 = 0;

        // XOR of all numbers from 1 to n
        for (int i = 1; i <= n; i++) 
        xor1=xor1^i;

        // XOR of all array elements
        for (int i = 0; i < arr.size(); i++) 
        xor2=xor2^arr[i];

        return xor1 ^ xor2;
    }
};

