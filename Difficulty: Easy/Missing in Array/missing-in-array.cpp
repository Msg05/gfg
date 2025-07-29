class Solution {
  public:
    int missingNum(vector<int>& arr) {

        long long n = (long long)arr.size() + 1; // avoid overflow
        long long totalSum = n * (n + 1) / 2;
        long long arraySum = 0;

        for(int i = 0; i < arr.size(); i++) 
        arraySum += arr[i];

        return (int)(totalSum - arraySum);
    }
};

/*
Example Dry Run:
Input: arr = [1, 2, 3, 5]
n = 5
totalSum = 5 * 6 / 2 = 15
arraySum = 1+2+3+5 = 11

missing = 15 - 11 = 4 
*/