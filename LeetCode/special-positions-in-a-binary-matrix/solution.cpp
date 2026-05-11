class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int ans = 0;
        int row = mat.size();
        int col = mat[0].size();
        int cnt = 0;
        int tmp;
        for (int i = 0; i < row; ++i) {
            cnt = 0;
            for (int j = 0; j < col; ++j) {
                if (mat[i][j] == 1) {
                    cnt++;
                    tmp = j;
                }
            }
            if (cnt == 1) {
                cnt = 0;
                for (int k = 0; k < row; ++k) {
                    if (mat[k][tmp] == 1) {
                        cnt++;
                    }
                }
                if (cnt == 1)
                    ans++;
            }
        }
        return ans;
    }
};