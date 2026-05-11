class Solution {
public:
    int robotSim(vector<int>& commands, vector<vector<int>>& obstacles) {
        int x = 0, y = 0;
        int ans = 0;
        set<pair<int, int>> st;
        for (auto& nums : obstacles) {
            st.insert({nums[0], nums[1]});
        }
        int dir = 0;
        // 0 -> NORTH
        // 1 -> East
        // 2 -> South
        // 3 -> West
        vector<pair<int, int>> vct{{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
        int size = commands.size();
        for (int i = 0; i<size; ++i) {
            if (commands[i] > 0) {
                int step_x = vct[dir].first;
                int step_y = vct[dir].second;
                for (int j = 0; j < commands[i]; ++j) {
                    if (st.count({x + step_x, y + step_y})) {
                        break;
                    } else {
                        x += step_x;
                        y += step_y;
                    }
                    ans = max(ans, x * x + y * y);
                }

            } else {
                if (commands[i] == -1) {
                    dir = (dir + 1) % 4;
                } else
                    dir = (dir + 3) % 4;
            }
        }
        return ans;
    }
};