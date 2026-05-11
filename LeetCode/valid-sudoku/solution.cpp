class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        for (int i = 0; i < 9; ++i) {
            unordered_set<char> stx, sty;
            for (int j = 0; j < 9; ++j) {
                if (board[i][j] > '.') {
                    if (stx.find(board[i][j]) == stx.end()) {
                        stx.insert(board[i][j]);
                    } else
                        return false;
                }
                if(board[j][i]>'.'){
                     if (sty.find(board[j][i]) == sty.end()) {
                        sty.insert(board[j][i]);
                    } else
                        return false;

                }
            }
        
        }
        
        for (int k = 0; k < 3; ++k) {
            for (int m = 0; m < 3; ++m) {
                unordered_set<char> st;
                for (int i = 3 * k; i < 3 * (k + 1); ++i) {
                    for (int j = 3 * m; j < 3 * (m + 1); ++j) {
                        if (board[i][j] > '.') {
                            if (st.find(board[i][j]) == st.end()) {
                                st.insert(board[i][j]);
                            } else
                                return false;
                        }
                    }
                }
            }
        }
        return true;
    }
};