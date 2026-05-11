class Solution {
public:
    string addBinary(string a, string b) {
        // cout  = ab + acin+ bcin
        // s = a^y^cin
        int size_a = a.size(), size_b = b.size();
        string ans;
        int cin = 0;
        for (int i = 0; i < max(size_a, size_b) || cin > 0; ++i) {
            int A = 0, B = 0;
            if (i < size_a)
                A = a[size_a - i - 1] - '0';
            if (i < size_b)
                B = b[size_b - i - 1] - '0';

            int sum = (A ^ B) ^ cin;
            cin = cin * (A ^ B) + A * B;
            ans = char(sum + '0') + ans;
        }
        return ans;
    }
};