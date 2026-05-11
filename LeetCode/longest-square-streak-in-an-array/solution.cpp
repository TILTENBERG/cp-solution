class Solution {
public:
    int longestSquareStreak(vector<int>& nums) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        unordered_set<int> st;
        for (auto& it : nums) {
            st.insert(it);
        }
        int ans = 0;
        for (int i = 2; i <= 316; ++i) {
            unsigned long long num = i;
            int sum = 0;
            while (true) {
                if(st.find(num)!=st.end()){
                    sum++;
                    num*=num;
                }
                else{
                    break;
                }
                
            }
            ans = max(ans, sum);
        }
        return (ans == 1 || ans==0) ? -1 : ans;
    }
};