class Solution {
public:
    vector<vector<int>> rotateGrid(vector<vector<int>>& grid, int k) {
        int rows = grid.size();
        int cols = grid[0].size();
        int cnt = min(rows, cols) / 2;
        for (int i = 0; i < cnt; ++i) {
            vector<int> layer;
            for (int row = i; row < rows - i; ++row) {
                layer.push_back(grid[row][i]);
            }
            for (int col = i + 1; col < cols - i; ++col) {
                layer.push_back(grid[rows - 1 - i][col]);
            }
            for (int row = rows - i - 2; row >= i; --row) {
                layer.push_back(grid[row][cols - i - 1]);
            }
            for (int col = cols - i - 2; col > i; --col) {
                layer.push_back(grid[i][col]);
            }

            /*test
            cout << "Layer :" << i << "\n";
            for (int j = 0; j < layer.size(); ++j) {
                cout << layer[j] << " ";
            }
            cout << '\n';
            */
            int size = layer.size();
            int new_k = k % size;
            for (int j = 0; j < new_k; ++j) {
                int tmp = layer.back();
                for (int ind = 0; ind < size; ++ind) {
                    swap(layer[ind], tmp);
                }
            }
            int ind = 0;
            for (int row = i; row < rows - i; ++row, ++ind) {
                grid[row][i] = layer[ind];
            }
            for (int col = i + 1; col < cols - i; ++col, ++ind) {
                grid[rows - 1 - i][col] = layer[ind];
            }
            for (int row = rows - i - 2; row >= i; --row, ++ind) {
                grid[row][cols - i - 1] = layer[ind];
            }
            for (int col = cols - i - 2; col > i; --col, ++ind) {
                grid[i][col] = layer[ind];
            }
        }
        return grid;
    }
};