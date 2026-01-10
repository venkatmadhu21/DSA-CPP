class Solution {
public:
    int n, m;
    vector<vector<int>> dp;
    int f(int i, int j, string &s1, string &s2) {
        if (i == n) {
            int sum = 0;
            for (int k = j; k < m; k++) sum += s2[k];
            return sum;
        }
        if (j == m) {
            int sum = 0;
            for (int k = i; k < n; k++) sum += s1[k];
            return sum;
        }
        if (dp[i][j] != -1) return dp[i][j];
        if (s1[i] == s2[j]) {
            return dp[i][j] = f(i + 1, j + 1, s1, s2);
        }
        int deleteS1 = s1[i] + f(i + 1, j, s1, s2);
        int deleteS2 = s2[j] + f(i, j + 1, s1, s2);
        return dp[i][j] = min(deleteS1, deleteS2);
    }
    int minimumDeleteSum(string s1, string s2) {
        n = s1.size();
        m = s2.size();
        dp.assign(n, vector<int>(m, -1));
        return f(0, 0, s1, s2);
    }
};
