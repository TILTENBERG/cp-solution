class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        int ans = INT_MAX;
        int size = nums.size();
        for (int i = 0; i < size; ++i) {
            if (nums[i] == target)
                ans = min(ans, abs(i - start));
        }
        return ans;
    }
};