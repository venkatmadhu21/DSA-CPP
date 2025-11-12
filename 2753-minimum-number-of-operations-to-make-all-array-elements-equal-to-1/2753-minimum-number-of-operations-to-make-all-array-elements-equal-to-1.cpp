#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n = nums.size();
        int count_ones = count(nums.begin(), nums.end(), 1);

        // Case 1: Already some 1s present
        if (count_ones > 0)
            return n - count_ones;

        // Case 2: Try to create a 1 using subarrays
        int min_len = INT_MAX;
        for (int i = 0; i < n; ++i) {
            int g = nums[i];
            for (int j = i + 1; j < n; ++j) {
                g = gcd(g, nums[j]);
                if (g == 1) {
                    min_len = min(min_len, j - i + 1);
                    break;
                }
            }
        }

        // No subarray can give gcd 1
        if (min_len == INT_MAX)
            return -1;

        // (min_len - 1) to create first 1 + (n - 1) to convert all to 1
        return (min_len - 1) + (n - 1);
    }
};
