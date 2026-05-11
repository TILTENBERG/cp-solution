class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        unsigned long long ans = 0;
        make_heap(nums.begin(), nums.end());
        int num;
        for (int i = 1; i <= k; ++i) {
            ans += nums.front();
            num = ceil(double(nums[0]) / 3);
            pop_heap(nums.begin(), nums.end());
            nums.pop_back();
            nums.push_back(num);
            push_heap(nums.begin(), nums.end());
        }
        return ans;
    }
};