#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numberOfWays(string corridor) {
        const long long MOD = 1e9 + 7;
        vector<int> seats;

        // Collect positions of all seats
        for (int i = 0; i < corridor.size(); i++) {
            if (corridor[i] == 'S') seats.push_back(i);
        }

        // Must have even number of seats
        if (seats.size() == 0 || seats.size() % 2 == 1) return 0;

        long long ways = 1;

        // Multiply the number of ways for every adjacent block
        for (int i = 1; i < seats.size() - 1; i += 2) {
            int gap = seats[i + 1] - seats[i];
            ways = (ways * gap) % MOD;
        }

        return (int)ways;
    }
};

