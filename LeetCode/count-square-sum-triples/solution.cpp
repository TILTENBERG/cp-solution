class Solution {
public:
    int countTriples(int n) {
        int ans = 0;
        // Iterate m. Smallest c is m^2 + 1, so check m*m + 1 <= n
        for (int m = 2; m * m + 1 <= n; ++m) {
            // Iterate k. k must be less than m.
            for (int k = 1; k < m; ++k) {
                
                // 1. Calculate hypotenuse
                int c = m * m + k * k;
                if (c > n) break; // Optimization
                
                // 2. Check for Primitive properties
                // gcd(m,k) == 1 AND one is even/one is odd
                if (gcd(m, k) == 1 && (m - k) % 2 == 1) {
                    // 3. Add all multiples of this triple
                    ans += 2 * (n / c);
                }
            }
        }
        return ans;
    }
};