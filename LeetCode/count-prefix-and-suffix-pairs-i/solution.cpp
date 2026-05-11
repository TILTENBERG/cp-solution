class Solution {
public:
bool isPrefixAndSuffix(string& a, string& b) {
        if (a.size() > b.size())
            return 0;

        int size = a.size();
        if (b.substr(0, size) == a && b.substr(b.size() - size, size) == a)
            return 1;
        else return 0;
    }
    int countPrefixSuffixPairs(vector<string>& words) {
        int ans = 0;
        for (int i = 0; i < words.size() - 1; ++i) {
            for (int j = i + 1; j < words.size(); ++j) {
                ans = isPrefixAndSuffix(words[i], words[j]) ? ans + 1 : ans;
            }
        }
        return ans;
    }
    
};