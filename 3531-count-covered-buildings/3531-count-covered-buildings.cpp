class Solution {
public:
    int countCoveredBuildings(int n, vector<vector<int>>& buildings) {
        unordered_map<int, vector<int>> row, col;
        for (auto &b : buildings) {
            int x = b[0], y = b[1];
            row[x].push_back(y);
            col[y].push_back(x);
        }
        for (auto &p : row) {
            auto &v = p.second;
            sort(v.begin(), v.end());
        }
        for (auto &p : col) {
            auto &v = p.second;
            sort(v.begin(), v.end());
        }
        int covered = 0;
        for (auto &b : buildings) {
            int x = b[0], y = b[1];
            auto &ys = row[x];
            auto &xs = col[y];
            if (ys.front() < y && y < ys.back() &&
                xs.front() < x && x < xs.back()) {
                ++covered;
            }
        }
        return covered;
    }
};
