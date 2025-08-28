class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
    int n = matrix[0].size();
    vector<int> rows, cols;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] == 0) {
                rows.push_back(i);
                cols.push_back(j);
            }
        }
    }
    while (!rows.empty() && !cols.empty()) {
        int row = rows.back(); rows.pop_back();
        int col = cols.back(); cols.pop_back();
        for (int j = 0; j < n; j++) {
            matrix[row][j] = 0;
        }
        for (int i = 0; i < m; i++) {
            matrix[i][col] = 0;
        }
    }
}
};
