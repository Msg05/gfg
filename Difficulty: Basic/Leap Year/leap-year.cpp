class Solution {
public:
    bool checkYear(int n) {
        // leap year if divisible by 400 OR divisible by 4 but not 100
        if ((n % 400 == 0) || (n % 4 == 0 && n % 100 != 0)) {
            return true;
        }
        return false;
    }
};
