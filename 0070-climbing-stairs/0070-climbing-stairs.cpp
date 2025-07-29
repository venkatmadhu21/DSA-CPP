class Solution {
    public: 
    int climbStairs(int n) {
    if (n <= 2) return n;   // base cases

    int a = 1, b = 2, ways;  
    for (int i = 3; i <= n; i++) {
        ways = a + b;  // f(n) = f(n-1) + f(n-2)
        a = b;         // shift window
        b = ways;
    }
    return b;
}

};
