class Solution {
public:
    int maximizeSquareHoleArea(int n, int m, vector<int>& hBars,
                               vector<int>& vBars) {
        sort(hBars.begin(), hBars.end());
        sort(vBars.begin(), vBars.end());

        // find min and max of longest conseq of each vector

        int start = hBars[0];
        int diff1 = 0;
        int diff2 = 0;
        for (int i = 1; i < hBars.size(); ++i) {
            if (hBars[i] - 1 != hBars[i - 1]) {
                diff1 = max(diff1, hBars[i - 1] - start);
                start = hBars[i];
            }
        }
        diff1 = max(diff1, hBars.back() - start);
        start = vBars[0];
        for (int i = 1; i < vBars.size(); ++i) {
            if (vBars[i] - 1 != vBars[i - 1]) {
                diff2 = max(diff2, vBars[i - 1] - start);
                start = vBars[i];
            }
        }
        diff2 = max(diff2, vBars.back() - start);

        int length = min(diff1, diff2) + 2;
        int ans = length * length;
        return ans;
    }
};