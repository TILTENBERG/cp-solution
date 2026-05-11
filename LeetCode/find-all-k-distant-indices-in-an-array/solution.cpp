class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        set<int> st;
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] == key) {
                for (int j = 1; j <= k; ++j) {
                    if (j + i < nums.size())
                        st.insert(j+i);
                    if (i - j >= 0)
                        st.insert(i-j);
                }
                st.insert(i);
            }
        }
        vector<int> ans;
        for (int num : st) {
            ans.push_back(num);
        }
        return ans;
    }
};