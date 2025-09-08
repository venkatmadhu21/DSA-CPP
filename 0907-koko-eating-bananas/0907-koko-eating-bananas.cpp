#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canEat(vector<int>& piles, int h, int speed) {
        long long hours = 0;
        for (int bananas : piles) {
        hours += ceil((double)bananas / speed);
            if (hours > h) return false; 
        }
        return hours <= h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = *max_element(piles.begin(), piles.end()); 
        int ans = high;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (canEat(piles, h, mid)) {
                ans = mid;       
                high = mid - 1;  
            } else {
                low = mid + 1;   
            }
        }
        return ans;
    }
};

