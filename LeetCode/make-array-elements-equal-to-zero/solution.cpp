class Solution {
public:
    int countValidSelections(vector<int>& nums) {
        int sum = 0;
        for (int i = 0; i < nums.size(); ++i) {
            sum += nums[i];
        }
        int presum = 0;
        int ans = 0;
        for (int i = 0; i < nums.size(); ++i) {
            presum += nums[i];
            if (nums[i] == 0) {
                if (presum == sum - presum)
                    ans += 2;
                if (presum == sum - presum + 1 || presum + 1 == sum - presum)
                    ans += 1;
            }
        }
        return ans;
    }
};