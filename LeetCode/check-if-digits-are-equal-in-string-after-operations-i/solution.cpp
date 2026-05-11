class Solution {
public:
    bool hasSameDigits(string s) {
        for (int last=s.size()-1; last>=2; last--) {
            for (int i=0; i<last; i++) {
                s[i] = s[i] + s[i+1] - '0';
                if (s[i] > '9') s[i]-=10;
            }
        }
        return (s[0] == s[1]);
    }
};