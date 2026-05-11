class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int size = nums.size();
        int ans = 0;
        for (int i = 0; i < size; ++i) {
            int tmp = nums[i];
            int sum = 0;
            int cnt = 0;
            for (int j = 1; j * j <= tmp; ++j) {
                if (tmp % j == 0) {
                    cnt++;
                    sum += j;
                    if (tmp / j != j) {
                        sum += tmp / j;
                        cnt++;
                    }
                    if (cnt > 4)
                        break;
                }
            }
            if (cnt == 4)
                ans += sum;
        }
        return ans;
    }
};