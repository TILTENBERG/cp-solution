class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        set<int> st;
        int ans = 0;
        for (const int& num : nums) {
            if (!st.count(num))
                st.insert(num);
            else {
                ans = num;
                break;
            }
        }
        return ans;
    }
};