#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        long long sum = 0;  // use long long to avoid overflow
        for (int x : nums) {
            sum += x;
        }

        int r = sum % k;
        if (r < 0) r += k;  // safety if constraints allowed negatives (usually not needed here)

        return r;  // minimum operations
    }
};
