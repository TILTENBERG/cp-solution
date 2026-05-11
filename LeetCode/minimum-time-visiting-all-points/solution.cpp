class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int size = points.size();
        int ans = 0;
        for (int i = 1; i < size; ++i) {
            int x1 = points[i][0];
            int y1 = points[i][1];

            int x0 = points[i - 1][0];
            int y0 = points[i - 1][1];

            int diff_x = abs(x1 - x0);
            int diff_y = abs(y1 - y0);

            ans += min(diff_y, diff_x);
            ans += max(diff_y, diff_x) - min(diff_y, diff_x);
        }
        return ans;
    }
};