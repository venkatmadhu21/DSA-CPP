class Solution {
public:
    double myPow(double x, int n) {
        long long nn = n;  // Use long long to avoid overflow
        double ans = 1.0;

        if (nn < 0) {
            nn = -1 * nn;
        }

        while (nn) {
            if (nn % 2 == 1) {
                ans *= x;
                nn--;
            } else {
                x *= x;
                nn /= 2;
            }
        }

        if (n < 0) ans = 1.0 / ans;
        return ans;
    }
};
