class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans = 0;
        int size = nums.size();
        int cnt = 0;
        for (int i = 0; i < size; ++i) {
            if (nums[i] == 1)
                cnt++;
            else {
                ans = max(ans, cnt);
                cnt = 0;
            }
        }
        ans = max(ans, cnt);
        return ans;
    }
};