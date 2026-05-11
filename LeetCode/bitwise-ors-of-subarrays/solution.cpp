class Solution {
public:
    int subarrayBitwiseORs(vector<int>& arr) {
        unordered_set<int> st;
        unordered_set<int> ans;
        for (int num : arr) {
            unordered_set<int> cur;
            cur.insert(num);
            for (int n : st) {
                cur.insert(num | n);
            }
            ans.insert(cur.begin(), cur.end());
            st = cur;
        }
        return ans.size();
    }
};