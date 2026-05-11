class Solution {
public:
    int swimInWater(vector<vector<int>>& grid) {
        int n = grid.size();
        priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>> pq;
        vector<vector<bool>> visited(n, vector<bool>(n, false));

        pq.push({grid[0][0], 0, 0});
        visited[0][0] = true;

        int directions[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

        while (!pq.empty()) {
            vector<int> current = pq.top();
            pq.pop();
            
            int max_elevation = current[0];
            int r = current[1];
            int c = current[2];

            if (r == n - 1 && c == n - 1) {
                return max_elevation;
            }

            for (auto& dir : directions) {
                int new_r = r + dir[0];
                int new_c = c + dir[1];

                if (new_r >= 0 && new_r < n && new_c >= 0 && new_c < n && !visited[new_r][new_c]) {
                    visited[new_r][new_c] = true;
                    int new_max = max(max_elevation, grid[new_r][new_c]);
                    pq.push({new_max, new_r, new_c});
                }
            }
        }
        
        return -1;
    }
};