const int MOD = 1e9 + 7;
class Solution {
public:
    int specialTriplets(vector<int>& nums) {
        int ans = 0;
        int size = nums.size();
        unordered_map<int, int> mp;
        for (int& num : nums)
            mp[num]++;
        unordered_map<int, int> cur;
        for (int i = 0; i < size; ++i) {
            mp[nums[i]]--;
            if (mp.find(nums[i] * 2) != mp.end() &&
                cur.find(nums[i] * 2) != cur.end()) {

                ans = (ans + ((long long)mp[nums[i] * 2] * cur[nums[i] * 2]) % MOD)%MOD;
            }
            cur[nums[i]]++;
        }
        return ans;
    }
};