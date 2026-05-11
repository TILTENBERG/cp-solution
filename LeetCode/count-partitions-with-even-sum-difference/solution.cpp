class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int sum = 0;
        for (int& num : nums)
            sum += num;
        int size = nums.size();
        int tmp = 0;
        int ans = 0;
        for (int i = 0; i < size - 1; ++i) {
            tmp += nums[i];
            if (abs(2 * tmp - sum) % 2 == 0)
                ans++;
        }
        return ans;
    }
};