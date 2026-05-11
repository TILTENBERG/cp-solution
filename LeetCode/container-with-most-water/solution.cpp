class Solution {
public:
    int maxArea(vector<int>& height) {
        int size = height.size();
        int l = 0, r = size - 1;
        int ans = min(height[l], height[r]) * (size - 1);
        while (l < r) {
            if (min(height[l], height[r]) == height[l]) {
                l++;
                if (height[l] > height[l - 1]) {
                    ans = max(ans, min(height[l], height[r]) * (r - l));
                }

            } else {
                r--;
                if (height[r] > height[r + 1]) {
                    ans = max(ans, min(height[l], height[r]) * (r - l));
                }
            }
        }
        return ans;
    }
};