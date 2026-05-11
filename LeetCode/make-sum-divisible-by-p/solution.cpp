class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {
        int target = 0;
        int size = nums.size();
        for (int i = 0; i < size; ++i) {
            target = (target + nums[i]) % p;
        }
        if (!target)
            return 0;
        unordered_map<int, int> mp;
        mp[0] = -1;
        int sum = 0;
        int ans = size;
        for (int i = 0; i < size; ++i) {
            sum = (sum + nums[i]) % p;
            int needed = (sum - target + p) % p;
            if (mp.find(needed)!=mp.end())
                ans = min(ans, i - mp[needed]);
            mp[sum] = i;
        }

        return ans == size ? -1 : ans;
    }
};