class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> vct = nums;
        sort(vct.begin(), vct.end());
        vector<int> ans;
        int size = nums.size();
        for (int i = 0; i < size; ++i) {
            int k = lower_bound(vct.begin(), vct.end(), nums[i]) - vct.begin();
            ans.push_back(k);
        }
        return ans;
    }
};