#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    const long long MOD = 1e9 + 7;

    int countPartitions(vector<int>& nums, int K) {
        int n = nums.size();
        vector<long long> dp(n + 1, 0), pref(n + 2, 0);
        dp[0] = 1;
        pref[1] = 1; // prefix sum

        deque<int> mx, mn;
        int l = 0;

        for (int r = 0; r < n; r++) {
            // push to max deque
            while (!mx.empty() && nums[mx.back()] <= nums[r]) mx.pop_back();
            mx.push_back(r);

            // push to min deque
            while (!mn.empty() && nums[mn.back()] >= nums[r]) mn.pop_back();
            mn.push_back(r);

            // shrink left if invalid
            while (!mx.empty() && !mn.empty() &&
                   nums[mx.front()] - nums[mn.front()] > K) {
                if (mx.front() == l) mx.pop_front();
                if (mn.front() == l) mn.pop_front();
                l++;
            }

            // dp transition: sum dp[l..r]
            dp[r + 1] = (pref[r + 1] - pref[l] + MOD) % MOD;
            pref[r + 2] = (pref[r + 1] + dp[r + 1]) % MOD;
        }

        return dp[n] % MOD;
    }
};
