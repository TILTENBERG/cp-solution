class Solution {
public:
    bool isGood(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int size = nums.size();
        int n = size - 1;
        int num = 1;
        if (nums[0] != 1)
            return false;
        for (int i = 1; i <= n - 1; ++i) {
            if (nums[i] - 1 != nums[i - 1]) {
                return false;
            }
        }
        if (nums[n] == n)
            return true;
        else
            return false;
    }
};