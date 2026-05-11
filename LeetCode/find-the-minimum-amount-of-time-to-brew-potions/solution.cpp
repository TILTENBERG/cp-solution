class Solution {
public:
    long long minTime(vector<int>& skill, vector<int>& mana) {
        vector<long long> sum;
        sum.push_back(skill[0]);
        for (int i = 1; i < skill.size(); ++i) {
            sum.push_back(sum[i - 1] + skill[i]);
        }
        vector<long long> vct;
        int start = 0;
        for (int i = 0; i < sum.size(); ++i) {
            vct.push_back(sum[i] * mana[0]);
        }

        for (int i = 1; i < mana.size(); ++i) {
            long long x = vct[0];
            for (int j = 1; j < vct.size(); ++j) {
                x = max(x, vct[j] - sum[j - 1] * mana[i]);
            }
           // cout << x << " ";
            for (int j = 0; j < vct.size(); ++j) {
                vct[j] = x + sum[j] * mana[i];
               // cout << vct[j] << " ";
            }
           // cout << endl;
        }
        return vct.back();
    }
};