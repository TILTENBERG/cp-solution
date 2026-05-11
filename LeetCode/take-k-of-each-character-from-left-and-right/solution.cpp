class Solution {
public:
    int takeCharacters(string s, int k) {
        int ans = INT_MAX;
        int cnta = 0;
        int cntb = 0;
        int cntc = 0;
        int size = s.size();
        for (int i = 0; i < size; ++i) {
            if (s[i] == 'a')
                cnta++;
            if (s[i] == 'b')
                cntb++;
            if (s[i] == 'c')
                cntc++;
        }
        if (cnta >= k && (cntb >= k && cntc >= k)) {
            int a = 0;
            int b = 0;
            int c = 0;
            int l = 0;
            int r = 0;
            while (r < size) {
                if (s[r] == 'a')
                    a++;
                if (s[r] == 'b')
                    b++;
                if (s[r] == 'c')
                    c++;
                r++;
                while (a > cnta - k || b > cntb - k || c > cntc - k) {
                    if (s[l] == 'a')
                        a--;
                    if (s[l] == 'b')
                        b--;
                    if (s[l] == 'c')
                        c--;
                    l++;
                }
                ans = min(ans, size - (r - l));
            }

            return ans;

        } else {
            return -1;
        }
    }
};

/*









*/