class Solution {
public:
    bool issafe(vector<vector<char>>& board, int row, int col, char num) {
        for (int i = 0; i < 9; ++i) {
            if (board[row][i] == num)
                return false;
        }
        for (int i = 0; i < 9; ++i) {
            if (board[i][col] == num)
                return false;
        }
        int k = row - row % 3;
        int m = col - col % 3;
        for (int i = k; i < k + 3; ++i) {
            for (int j = m; j < m + 3; ++j) {
                if (board[i][j] == num)
                    return false;
            }
        }
        return true;
    }
    bool cansolve(vector<vector<char>>& board, int row, int col) {
        if (col == 9 && row == 8) {
            return true;
        }
        if (col == 9) {
            row++;
            col = 0;
        }
        if (board[row][col] > '.') {
            return cansolve(board, row, col+1);
        }
        for (char i = '1'; i <= '9'; i++) {
            if (issafe(board, row, col, i)) {
                board[row][col] = i;
                if (cansolve(board, row, col+1))
                    return true;
            }
            board[row][col] = '.';
        }
        return false;
    }
    void solveSudoku(vector<vector<char>>& board) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);

        if (cansolve(board, 0, 0)) {
            return ;
        }
        
    }
};