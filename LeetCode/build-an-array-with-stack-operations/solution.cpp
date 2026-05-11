class Solution {
public:
    vector<string> buildArray(vector<int>& nums, int n) {
        vector<string> ans;
        stack<int> st;
        int ind = 0;
        for (int i = 1; i <= n, ind < nums.size(); ++i) {
            st.push(i);
            ans.push_back("Push");
            if (st.top() != nums[ind]) {
                ans.push_back("Pop");
                st.pop();
            } else
                ind++;
        }
        return ans;
    }
};