class Solution {
public:
    int floorSqrt(int n) {
        if (n == 0 || n == 1) return n; // base cases
        
        int low = 1, high = n, ans = 1;
        
        while (low <= high) {
            int mid = low + (high - low) / 2;
            
            if ((long long)mid * mid == n)  // perfect square
                return mid;
            
            if ((long long)mid * mid < n) {
                ans = mid; // store potential floor sqrt
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }
        
        return ans;
    }
};
