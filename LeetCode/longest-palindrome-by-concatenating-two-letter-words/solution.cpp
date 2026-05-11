class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        unordered_map<string, int> mp;
        int ans = 0;
        bool hasCenter = false;

        for (const string& word : words) {
            mp[word]++;
        }

        for (auto& [word, count] : mp) {
            string rev = string{word[1], word[0]};
            cout << word << " " << rev << endl;
            if (word == rev) {

                ans += (count / 2) * 4;
                if (count % 2 == 1) {
                    hasCenter = true;
                }
            } else if (word < rev && mp.count(rev)) {

                int pairs = min(count, mp[rev]);
                ans += pairs * 4;

                mp[word] = 0;
                mp[rev] = 0;
            }
        }

        if (hasCenter)
            ans += 2;

        return ans;
    }
};
