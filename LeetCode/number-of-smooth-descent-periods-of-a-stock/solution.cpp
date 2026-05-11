class Solution {
public:
    long long getDescentPeriods(vector<int>& prices) {
        int size = prices.size();
        long long ans = size;
        long long cnt = 1;
        // 4 3 2 1
        for (int i = 1; i < size; ++i) {
            if (prices[i - 1] - 1 == prices[i])
                cnt++;
            else {
                ans += (cnt * (cnt - 1) / 2);
                cnt = 1;
            }
        }
        if(size >=2){
        if(prices[size-2]-1==prices[size-1]) ans += (cnt * (cnt - 1) / 2);
        }
        return ans;
    }
};