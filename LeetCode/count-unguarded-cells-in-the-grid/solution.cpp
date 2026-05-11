class Solution {
public:
    vector<vector<int>> vct;
    set<pair<int, int>> wallst;
    set<pair<int, int>> guardst;

    void sim(int m, int n, vector<vector<int>>& guards,
             vector<vector<int>>& walls) {
        vct.assign(m, vector<int>(n, 0));
        for (auto& wall : walls) {
            wallst.insert({wall[0], wall[1]});
        }
        for (auto& guard : guards) {
            guardst.insert({guard[0], guard[1]});
        }
        for (auto& pos : guards) {
            int x = pos[0];
            int y = pos[1];
            vct[x][y] = 1;
            for (int i = y + 1; i < n; ++i) {
                if (wallst.count({x, i}) || guardst.count({x, i}))
                    break;
                else
                    vct[x][i] = 1;
            }
            for (int i = y - 1; i >= 0; --i) {
                if (wallst.count({x, i}) || guardst.count({x, i}))
                    break;
                else
                    vct[x][i] = 1;
            }
            for (int i = x + 1; i < m; ++i) {
                if (wallst.count({i, y}) || guardst.count({i, y}))
                    break;
                else
                    vct[i][y] = 1;
            }
            for (int i = x - 1; i >= 0; --i) {
                if (wallst.count({i, y}) || guardst.count({i, y}))
                    break;
                else
                    vct[i][y] = 1;
            }
        }
    }
    int countUnguarded(int m, int n, vector<vector<int>>& guards,
                       vector<vector<int>>& walls) {
        int ans = 0;
        sim(m, n, guards, walls);
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (vct[i][j] == 0 && !wallst.count({i, j}) &&
                    !guardst.count({i, j}))
                    ans++;
            }
        }
        return ans;
    }
};