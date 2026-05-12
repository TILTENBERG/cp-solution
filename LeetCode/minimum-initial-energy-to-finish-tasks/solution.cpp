class Solution {
public:
    int minimumEffort(vector<vector<int>>& tasks) {
        sort(tasks.begin(), tasks.end(),
             [](const vector<int>& a, const vector<int>& b) {
                 return a[1] - a[0] < b[1] - b[0];
             });
        int size = tasks.size();
        int ans = tasks[size - 1][1];
        int tmp = ans - tasks[size - 1][0];
        for (int i = size - 2; i >= 0; --i) {
            if (tmp >= tasks[i][1])
                tmp -= tasks[i][0];
            else {
                ans += (tasks[i][1] - tmp);
                tmp = tasks[i][1] - tasks[i][0];
            }
        }
        return ans;
    }
};