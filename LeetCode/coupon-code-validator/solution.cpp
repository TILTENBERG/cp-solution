class Solution {
public:
    vector<string> validateCoupons(vector<string>& code,
                                   vector<string>& businessLine,
                                   vector<bool>& isActive) {

        // "electronics", "grocery", "pharmacy", "restaurant"
        int size = isActive.size();
        vector<string> elect, groc, phar, rest;
        for (int i = 0; i < size; ++i) {
            if (isActive[i] == true && (businessLine[i] == "electronics" ||
                                        businessLine[i] == "grocery" ||
                                        businessLine[i] == "pharmacy" ||
                                        businessLine[i] == "restaurant")) {
                string str = code[i];
                if (!str.empty()) {
                    bool valid = true;
                    for (char& c : str) {
                        if ((c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z') ||
                            (c >= 'a' && c <= 'z') || c == '_')
                            continue;
                        else {
                            valid = false;
                            break;
                        }
                    }
                    if (valid) {
                        if (businessLine[i] == "electronics")
                            elect.push_back(str);
                        if (businessLine[i] == "grocery")
                            groc.push_back(str);
                        if (businessLine[i] == "pharmacy")
                            phar.push_back(str);
                        if (businessLine[i] == "restaurant")
                            rest.push_back(str);
                    }
                }
            }
        }
        sort(elect.begin(), elect.end());
        sort(groc.begin(), groc.end());
        sort(phar.begin(), phar.end());
        sort(rest.begin(), rest.end());
        vector<string> ans;
        for (string& s : elect)
            ans.push_back(s);
        for (string& s : groc)
            ans.push_back(s);
        for (string& s : phar)
            ans.push_back(s);
        for (string& s : rest)
            ans.push_back(s);
        return ans;
    }
};