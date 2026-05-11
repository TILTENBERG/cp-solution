class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int size = nums.size();
        int sum = size * (size + 1) / 2;
        unordered_set<int> st;
        int dup;
        for (int i = 0; i < size; ++i) {
            sum -= nums[i];
            if (!st.count(nums[i]))
                st.insert(nums[i]);
            else
                dup = nums[i];
        }
        return vector<int>({dup, abs(dup + sum)});
    }
};