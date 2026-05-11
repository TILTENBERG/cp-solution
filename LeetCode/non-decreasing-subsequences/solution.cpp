class Solution {
    void backtrack(set<vector<int>>& st, vector<int>& vct, vector<int>& nums,
                   int ind) {
        if (ind >= nums.size()) {
            if (vct.size() > 1)
                st.insert(vct);
            return;
        }

        if (vct.empty() || nums[ind]>=vct.back()) {
            vct.push_back(nums[ind]);
            backtrack(st, vct, nums, ind + 1);
            vct.pop_back();
        }
        backtrack(st, vct, nums, ind + 1);
    }

public:
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        set<vector<int>> st;
        vector<int> vct;
        backtrack(st, vct, nums, 0);

        return vector(st.begin(), st.end());
    }
};