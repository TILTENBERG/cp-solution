class Solution {
public:
    vector<int> solveQueries(vector<int>& nums, vector<int>& queries) {
        int size = nums.size();
        unordered_map<int, vector<int>> table;

        for (int i = 0; i < size; ++i)
            table[nums[i]].push_back(i);

        vector<int> ans(queries.size());
        for (int i = 0; i < (int)queries.size(); ++i) {
            int ind = queries[i];
            int target = nums[ind];
            auto& positions = table[target];
            int sz = positions.size();

            if (sz == 1) {
                ans[i] = -1;
                continue;
            }

            int ind_table =
                lower_bound(positions.begin(), positions.end(), ind) -
                positions.begin();
            int prev = (ind_table - 1 + sz) % sz;
            int next = (ind_table + 1) % sz;

            ans[i] = min((ind - positions[prev] + size) % size,
                         (size + positions[next] - ind) % size);
        }
        return ans;
    }
};