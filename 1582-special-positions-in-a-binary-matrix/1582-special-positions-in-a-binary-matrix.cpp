class Solution {
public:
    bool isSpecial(vector<vector<int>>& mat, int row, int col) {
        int m = mat.size();
        int n = mat[0].size();
        for(int j = 0; j < n; j++) {
            if(j != col && mat[row][j] == 1)
                return false;
        }
        for(int i = 0; i < m; i++) {
            if(i != row && mat[i][col] == 1)
                return false;
        }
        return true;
    }
    int numSpecial(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        int cnt = 0;
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                if(mat[i][j] == 1 && isSpecial(mat, i, j)) {
                    cnt++;
                }
            }
        }
        return cnt;
    }
};