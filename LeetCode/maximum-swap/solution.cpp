class Solution {
public:
    int maximumSwap(int num) {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        string s = to_string(num);
        sort(s.rbegin(), s.rend());
        if (num == stoi(s))
            return num;
        int start;
        string str = to_string(num);
        int i = 0;
        for (i; i < str.size(); ++i) {
            if (str[i] != s[i]) {
                start = i;
                break;
            }
        }
        int max = s[start] - '0';
        int maxind;
        //cout<<max<<" "<<min<<endl;
        for (i = start; i < str.size(); ++i) {
            if (str[i]-'0' == max ) {
                maxind = i;
            }
            
        }
        swap(str[start],str[maxind]);
        /*char a = str[minind];
        str[minind] = str[maxind];
        str[maxind] = a;*/
        //cout<<minind<<" "<<maxind;

        return stoi(str);
    }
};