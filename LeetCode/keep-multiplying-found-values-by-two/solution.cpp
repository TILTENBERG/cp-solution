class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        int cnt = 0;
        sort(nums.begin(), nums.end());
        for (auto& num : nums) {
            if (num == original)
                original = original << 1;
        }

        return original;
    }
};