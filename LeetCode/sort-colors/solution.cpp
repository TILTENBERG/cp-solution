class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int> vct(4, 0);
        for (int& num : nums) {
            vct[num]++;
        }
        for (int i = 1; i < 4; ++i)
            vct[i] = vct[i - 1] + vct[i];
        vector<int> ans(nums.size(), 0);
        for (int i = nums.size() - 1; i >= 0; --i) {
            ans[vct[nums[i]] - 1] = nums[i];
            vct[nums[i]]--;
        }
        nums = ans;

        return;
    }
};