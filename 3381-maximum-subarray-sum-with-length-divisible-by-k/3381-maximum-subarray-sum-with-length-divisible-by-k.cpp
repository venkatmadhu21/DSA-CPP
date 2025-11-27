class Solution {
public:
    long long maxSubarraySum(vector<int>& nums, int k) {
       int n = (int)nums.size();
    if (k <= 0) return LLONG_MIN; // invalid K guard

    const long long INF = LLONG_MAX / 4LL;
    vector<long long> min_pref(k, INF);

    // prefix sum at index 0 has residue 0
    min_pref[0] = 0LL;

    long long cur = 0;
    long long ans = LLONG_MIN;

    for (int j = 1; j <= n; ++j) {
        cur += nums[j - 1];           // pref[j]
        int r = j % k;            // residue class of index j
        if (min_pref[r] != INF) {
            ans = max(ans, cur - min_pref[r]);
        }
        // Update minimal prefix sum for residue r
        min_pref[r] = min(min_pref[r], cur);
    }

    return ans;
  
    }
};