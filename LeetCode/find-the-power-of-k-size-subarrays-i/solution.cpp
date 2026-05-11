class Solution {
public:
    vector<int> resultsArray(vector<int>& nums, int k) {
        ios_base::sync_with_stdio(0);
        cout.tie(0);
        cin.tie(0);
        int size = nums.size();
        vector<int> ans(size - k + 1, -1);
        deque<int> dq;
        for (int i = 0; i < size; ++i) {
            if (!dq.empty() && dq.front() < i - k + 1)
                dq.pop_front();
            if (!dq.empty() && nums[i] != nums[i - 1] + 1)
                dq.clear();
            dq.push_back(i);
            if (i >= k - 1) {
                if (dq.size() == k)
                    ans[i - k + 1] = nums[dq.back()];
            }
        }
        return ans;
    }
};