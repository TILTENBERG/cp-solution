class Solution {
public:
    int reverse(int n) {
        int rev = 0;
        while (n > 0) {
            rev = rev * 10 + (n % 10);
            n /= 10;
        }
        return rev;
    }
    int minMirrorPairDistance(vector<int>& nums) {
        unordered_map<int, int> mp;
        int size = nums.size();
        int ans = INT_MAX;
        for (int i = 0; i < size; ++i) {
            int rev = reverse(nums[i]);
            /*for (auto num : mp) {
                cout << num.first << " " << num.second << " ";
            }
            cout << '\n';*/

            if (mp.find(nums[i]) != mp.end()) {
                //cout << nums[i] << '\n';
                ans = min(ans, abs(i - mp[nums[i]]));
            }
            // cout << rev << '\n';
            mp[rev] = i;
        }
        return ans == INT_MAX ? -1 : ans;
    }
};