class Solution {
public:
    bool isPowerOfFour(int n) {
       if (n <= 0) {
            return false;
        }
        
        if ((n & (n - 1)) != 0) {
            return false;
        }
        
        int numZeros = 0;
        while ((n & 1) == 0) {
            n >>= 1;
            numZeros++;
        }
        
        return numZeros % 2 == 0;
    }
};