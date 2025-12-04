#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countCollisions(string directions) {
        int n = directions.size();
        int l = 0, r = n - 1;

        // Skip all 'L' cars at the start - they will never collide
        while (l < n && directions[l] == 'L') {
            l++;
        }

        // Skip all 'R' cars at the end - they will never collide
        while (r >= 0 && directions[r] == 'R') {
            r--;
        }

        // If all cars are escaping, no collisions
        if (l > r) return 0;

        int collisions = 0;

        // Count all moving cars ('L' or 'R') in the middle segment
        for (int i = l; i <= r; i++) {
            if (directions[i] != 'S') {
                collisions++;
            }
        }

        return collisions;
    }
};
