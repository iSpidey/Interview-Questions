class Solution {
public:
    double myPow(double x, int n) {
        if (n == 0) return 1;                               // x^0 = 1
        double y = myPow(x, n / 2);                         // Divide exponent
        if (n % 2 != 0 && n > 0) return (x * y * y);        // Case 1: Odd+
        if (n % 2 != 0 && n < 0) return (1 / x * y * y);    // Case 2: Odd-
        return y * y;                                       // Case 3: Even
    }
};
