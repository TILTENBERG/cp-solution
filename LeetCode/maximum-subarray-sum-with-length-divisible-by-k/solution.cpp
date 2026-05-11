class Solution {
public:
    long long maxSubarraySum(vector<int>& nums, int k) {
        long long ans = LLONG_MIN;
        int size = nums.size();
        long long presum = 0;
        vector<long long> prefix(k, LLONG_MAX/2);
        prefix[k-1] = 0;
        for (int i = 0; i < size; ++i) {
            presum += nums[i];
            ans = max(ans, presum - prefix[i % k]);
            prefix[i % k] = min(prefix[i % k], presum);
        }
        return ans;
    }
};