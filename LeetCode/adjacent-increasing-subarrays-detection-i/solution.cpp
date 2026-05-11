class Solution {
public:
    bool hasIncreasingSubarrays(vector<int>& nums, int k) {
        int size = nums.size();
        if (2 * k > size)
            return false;
        if (k == 1)
            return true;
        for (int i = 0; i <= size - 2 * k; ++i) {
            bool ans = true;
            int l = 1;
            int j = i + k;
            for (l; l < k; ++l) {
                if (nums[i + l] <= nums[i + l - 1] ||
                    nums[j + l] <= nums[j + l - 1]) {
                    ans = false;
                    break;
                }
            }
            if (ans == true)
                return ans;
        }
        return false;
    }
};