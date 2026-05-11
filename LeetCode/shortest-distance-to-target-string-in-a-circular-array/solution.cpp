class Solution {
public:
    int closestTarget(vector<string>& words, string target, int startIndex) {
        int ans = INT_MAX;
        int size = words.size();
        for (int i = 0; i < size; ++i) {
            if (words[(startIndex + i) % size] == target)
                ans = min(ans, i);
            if (words[(startIndex - i + size) % size] == target)
                ans = min(ans, i);
        }
        return ans == INT_MAX ? -1 : ans;
    }
};