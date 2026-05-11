class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int size = nums.size();
        int ans = INT_MAX;
        if(k==1) return 0;
        for (int i = k - 1; i < size; ++i) {
            ans = min(ans, nums[i] - nums[i - k + 1]);
        }
        return ans;
        // 1 4 7 9
    }
};