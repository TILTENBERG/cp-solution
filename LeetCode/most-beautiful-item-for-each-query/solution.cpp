class Solution {
public:
    int lower_bound(vector<vector<int>>& vct, int target) {
        int l = 0;
        int r = vct.size() - 1;
        while (l <= r) {
            int mid = l + (r - l) / 2;
            if (vct[mid][0] > target)
                r = mid - 1;
            else
                l = mid + 1;
        }
        return l;
    }
    vector<int> maximumBeauty(vector<vector<int>>& items,
                              vector<int>& queries) {
        ios_base::sync_with_stdio(NULL);
        cin.tie(0);
        cout.tie(0);
        sort(items.begin(), items.end());
        vector<vector<int>> items2;
        int maxprev = items[0][1];
        int valprev = items[0][0];
        for (int i = 1; i < items.size(); ++i) {
            if (items[i][0] != valprev) {
                items2.push_back({valprev, maxprev});
                valprev = items[i][0];
            }
            maxprev = max(maxprev, items[i][1]);
        }
        items2.push_back({valprev, maxprev});
        vector<int> vct;
        for (int i = 0; i < queries.size(); ++i) {
            int target = queries[i];
            int l = 0;
            int r = items2.size() - 1;
            int lim = lower_bound(items2, target);
            // cout<<lim<<endl;
            if (lim == 0) {
                vct.push_back(0);
            } else {
                vct.push_back(items2[lim - 1][1]);
            }
        }
        return vct;
    }
};