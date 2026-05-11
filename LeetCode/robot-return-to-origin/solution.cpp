class Solution {
public:
    bool judgeCircle(string moves) {
        int u = 0, l = 0;
        for (char c : moves) {
            if (c == 'U')
                u++;
            else if (c == 'D')
                u--;
            if (c == 'L')
                l++;
            else if (c == 'R')
                l--;
        }
        if (u == 0 && l == 0)
            return true;
        else
            return false;
    }
};