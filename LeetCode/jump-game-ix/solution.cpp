class Solution {
public:
    vector<int> maxValue(vector<int>& nums) {
        int size = nums.size();
        vector<int> premax(size), sufmin(size);
        premax[0] = nums[0];
        sufmin[size - 1] = nums[size - 1];
        for (int i = 1; i < size; ++i) {
            premax[i] = max(premax[i - 1], nums[i]);
            sufmin[size - 1 - i] = min(sufmin[size - i], nums[size - 1 - i]);
        }
        vector<int> ans(size);
        ans[size - 1] = premax[size - 1];
        for (int i = size - 2; i >= 0; --i) {
            if (premax[i] > sufmin[i + 1])
                ans[i] = ans[i + 1];
            else
                ans[i] = premax[i];
        }
        return ans;
    }
};