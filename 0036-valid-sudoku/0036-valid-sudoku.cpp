class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for (int i = 0; i < 9; i++) {
            unordered_set<char> row, col;
            for (int j = 0; j < 9; j++) {
                if (board[i][j] != '.') {
                    if (row.count(board[i][j])) return false;
                    row.insert(board[i][j]);
                }
                if (board[j][i] != '.') {
                    if (col.count(board[j][i])) return false;
                    col.insert(board[j][i]);
                }
            }
        }
        for (int boxRow = 0; boxRow < 9; boxRow += 3) {
            for (int boxCol = 0; boxCol < 9; boxCol += 3) {
                unordered_set<char> box;
                for (int i = 0; i < 3; i++) {
                    for (int j = 0; j < 3; j++) {
                        char c = board[boxRow + i][boxCol + j];
                        if (c != '.') {
                            if (box.count(c)) return false;
                            box.insert(c);
                        }
                    }
                }
            }
        }
        return true;
    }
};
