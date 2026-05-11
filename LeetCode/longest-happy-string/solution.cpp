class Solution {
public:
    string longestDiverseString(int a, int b, int c) {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        string ans = "";
        auto addChar = [&](char ch, int& count) {
            ans += ch;
            count--;
        };
        
        while (a > 0 || b > 0 || c > 0) {
 
            if (ans.size() >= 2 && ans[ans.size() - 1] == ans[ans.size() - 2]) {
                
                if (ans.back() == 'a') {
                    if (b >= c && b > 0) addChar('b', b);
                    else if (c > 0) addChar('c', c);
                    else break;
                } else if (ans.back() == 'b') {
                    if (a >= c && a > 0) addChar('a', a);
                    else if (c > 0) addChar('c', c);
                    else break;
                } else { // ans.back() == 'c'
                    if (a >= b && a > 0) addChar('a', a);
                    else if (b > 0) addChar('b', b);
                    else break;
                }
            } else {
             
                if (a >= b && a >= c && a > 0) addChar('a', a);
                else if (b >= a && b >= c && b > 0) addChar('b', b);
                else if (c > 0) addChar('c', c);
                else break;
            }
        }
        
        return ans;
    }
};
