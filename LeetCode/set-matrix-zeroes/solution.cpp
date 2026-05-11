class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();
        set<int> rows, cols;
        for (int i = 0; i < row; ++i) {
            for (int j = 0; j < col; ++j) {
                if (matrix[i][j] == 0) {
                    rows.insert(i);
                    cols.insert(j);
                }
            }
        }
        for (auto& it : rows) {
            int num = it;
            for (int i = 0; i < col; ++i) {
                matrix[num][i] = 0;
            }
        }
        for (auto& it : cols) {
            int num = it;
            for (int i = 0; i < row; ++i) {
                matrix[i][num] = 0;
            }
        }
        return;
    }
};