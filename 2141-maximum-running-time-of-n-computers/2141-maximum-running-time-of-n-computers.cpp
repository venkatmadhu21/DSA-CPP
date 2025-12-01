class Solution {
public:
    long long maxRunTime(int n, vector<int>& batteries) {
        long long sum = 0;
        for (long long b : batteries) sum += b;
        long long low = 0, high = sum / n; // maximum possible T is sum/n
        long long ans = 0;
        while (low <= high) {
            long long mid = low + (high - low) / 2;
            // check feasibility of mid
            __int128 total = 0; // use wider type to avoid overflow when summing
            for (long long b : batteries) {
                total += (b < mid ? b : mid);
                if (total >= (__int128)mid * n) break;
            }
            if (total >= (__int128)mid * n) {
                ans = mid;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return ans;
    }
};
 