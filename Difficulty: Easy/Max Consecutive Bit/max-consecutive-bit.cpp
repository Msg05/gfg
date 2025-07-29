class Solution {
  public:
    int maxConsecBits(vector<int> &arr) {
        int maxCount = 1, currCount = 1;

        for(int i = 1; i < arr.size(); i++) {
            if(arr[i] == arr[i-1]) 
                currCount++;
            else 
                currCount = 1;

            maxCount = max(maxCount, currCount);
        }
        return maxCount;
    }
};

