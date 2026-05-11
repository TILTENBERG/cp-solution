class Solution {
public:
    vector<string> twoEditWords(vector<string>& queries,
                                vector<string>& dictionary) {
        vector<string> ans;
        int size = dictionary[0].size();
        for (string& str : queries) {
            for (string& s : dictionary) {
                int diff = 0;
                for (int ind = 0; ind < size; ++ind) {
                    if (s[ind] != str[ind]) {
                        diff++;
                        if (diff > 2)
                            break;
                    }
                }
                if (diff <= 2) {
                    ans.push_back(str);
                    break;
                }
            }
        }
        return ans;
    }
};