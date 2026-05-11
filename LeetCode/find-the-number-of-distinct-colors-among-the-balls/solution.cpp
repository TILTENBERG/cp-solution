class Solution {
public:
    vector<int> queryResults(int limit, vector<vector<int>>& queries) {
        unordered_map<int, int> ball, col;
        vector<int> ans;
        for (int i = 0; i < queries.size(); ++i) {
            if (ball.find(queries[i][0]) != ball.end()) {
                int curcolor = ball[queries[i][0]];
                col[curcolor]--;
                if (col[curcolor] == 0) {
                    col.erase(curcolor);
                }
                ball[queries[i][0]] = queries[i][1];
                col[queries[i][1]]++;
                ans.push_back(col.size());
            } else {
                ball[queries[i][0]] = queries[i][1];
                col[queries[i][1]]++;
                ans.push_back(col.size());
            }
        }
        return ans;
    }
};