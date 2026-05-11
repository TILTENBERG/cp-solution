class Solution {
public:
    string reverseByType(string s) {
        string chars, specs;
        for (char& ch : s) {
            if (ch <= 'z' && ch >= 'a')
                chars += ch;
            else
                specs += ch;
        }
        reverse(chars.begin(), chars.end());
        reverse(specs.begin(), specs.end());
        int ind1 = 0;
        int ind2 = 0;
        string ans;
        for (char& ch : s) {
            if (ch <= 'z' && ch >= 'a') {
                ans += chars[ind1];
                ind1++;
            } else {
                ans += specs[ind2];
                ind2++;
            }
        }
        return ans;
    }
};