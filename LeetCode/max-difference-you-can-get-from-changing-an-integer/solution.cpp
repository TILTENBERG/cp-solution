class Solution {
public:
    int maxDiff(int num) {
        int ans = 0;
        int max = 0;
        int min = 0;
        int digmax = 9;
        int digmin = 0;
        vector<int> vct;
        int n = num;
        while (num > 0) {
            vct.push_back(num % 10);
            num /= 10;
        }
        reverse(vct.begin(), vct.end());
        for (int i = 0; i < vct.size(); ++i) {
            if (vct[i] != digmax) {
                for (int j = 0; j < vct.size(); ++j) {
                    if (vct[j] == vct[i]) {
                        max = max * 10 + digmax;
                    } else {
                        max = max * 10 + vct[j];
                    }
                }
                break;
            }
        }
        if (max == 0)
            max = n;
        for (int i = 0; i < vct.size(); ++i) {
            if (vct[i] != 1 && i == 0) {
                for (int j = 0; j < vct.size(); ++j) {
                    if (vct[j] == vct[i])
                        min = min * 10 + 1;
                    else
                        min = min * 10 + vct[j];
                }

                break;
            } else if (vct[i] != 0 && i != 0 && vct[0]!=vct[i]) {
                for (int j = 0; j < vct.size(); ++j) {
                    if (vct[j] == vct[i])
                        min = min * 10;
                    else
                        min = min * 10 + vct[j];
                }

                break;
            }
        }
        if (min == 0)
            min = n;
        cout << max << " " << min;
        return max - min;
    }
};