class Solution {
public:
    int minimumK(vector<int>& nums) {
        int left = 1;
        int right = 200000;
        int ans = right;

        while (left <= right) {
            long long mid = left + (right - left) / 2;
            long long cnt = 0;

            for (int& x : nums) {

                cnt += (x + mid - 1) / mid;
            }

            if (cnt <= mid * mid) {
                ans = mid;
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }

        return ans;
    }
};