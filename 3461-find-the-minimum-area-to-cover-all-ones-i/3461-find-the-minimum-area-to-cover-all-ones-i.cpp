
class Solution {
public:
    int minimumArea(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        int minR = m, maxR = -1, minC = n, maxC = -1;

        for (int r = 0; r < m; ++r) {
            for (int c = 0; c < n; ++c) {
                if (grid[r][c] == 1) {
                    minR = min(minR, r);
                    maxR = max(maxR, r);
                    minC = min(minC, c);
                    maxC = max(maxC, c);
                }
            }
        }

        if (maxR == -1) return 0;  // no ones

        return (maxR - minR + 1) * (maxC - minC + 1);
    }
};
