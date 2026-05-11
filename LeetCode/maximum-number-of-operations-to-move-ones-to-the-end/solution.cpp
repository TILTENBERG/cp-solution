class Solution {
public:
    int maxOperations(string s) {
        int size = s.size();
        int ans = 0;
        int cnt = 0;
        for (int i = 0; i< size; ++i) {
            if (s[i] == '1') cnt++;
            else if((i>0) && s[i-1] == '1') ans+=cnt; 
        }
        return ans;
        // 001110000111101
        // 3 + 7
        // 0100011011110
        // 1 + 3(1+2) + 7(3+4)
    }
};