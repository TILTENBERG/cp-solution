class Solution {
public:
    vector<int> distinctDifferenceArray(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> p, s;
        vector<int> ans;
        for (auto i : nums) {
            s[i]++;
        }
        for(auto i : nums) {
            p[i]++;
            if(--s[i] == 0) s.erase(i);
            ans.push_back(p.size() - s.size());
        }
        return ans;
    }
};