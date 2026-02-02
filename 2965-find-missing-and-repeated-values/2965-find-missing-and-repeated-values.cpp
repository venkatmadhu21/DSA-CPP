class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        int N = n * n;
        unordered_map<int, int> mpp;
        int repeated = -1;
        long long actualSum = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                int val = grid[i][j];
                actualSum += val;
                mpp[val]++;
                if (mpp[val] == 2)
                    repeated = val;
            }
        }

        long long expectedSum = 1LL * N * (N + 1) / 2;
        int missing = expectedSum - (actualSum - repeated);

        return {repeated, missing};
    }
};
