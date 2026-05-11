class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        if (nums.size() < 4)
            return 0;
        int size = nums.size();
        unordered_map<int, int> mp;
        for (int i = 0; i < size - 1; ++i) {
            for (int j = i + 1; j < size; ++j) {
                mp[nums[i] * nums[j]]++;
            }
        }
        int ans = 0;
        for (auto& it : mp) {
            // cout<<it<<' '<<n<<endl;
            ans += (4 * it.second * (it.second - 1));
        }
        return ans;
    }
};