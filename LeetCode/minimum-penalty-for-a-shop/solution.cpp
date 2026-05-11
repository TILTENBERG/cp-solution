class Solution {
public:
    int bestClosingTime(string customers) {
        int cnt_n = 0, cnt_y = 0;
        for (char& c : customers) {
            if (c == 'Y')
                cnt_y++;
        }
        int ans = cnt_y;
        int time = 0;
        int size = customers.size();
        for (int i = 0; i < size; ++i) {
            if (customers[i] == 'N')
                cnt_n++;
            else
                cnt_y--;
            if (cnt_n + cnt_y < ans) {
                time = i + 1;
                ans = cnt_n + cnt_y;
            }
        }
        return time;
    }
};