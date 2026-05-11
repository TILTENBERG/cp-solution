class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        if(s1==s2)return true;
        int sum1 = 0;
        int size = s1.size();
        string str1, str2;
        for (int i = 0; i < size; ++i) {
            if (s1[i] != s2[i]) {
                str1.insert(str1.end(), s1[i]);
                str2.insert(str2.end(), s2[i]);
            }
        }
        
        if (str1.size() == 2 ) {
            sort(str1.begin(), str1.end());
            sort(str2.begin(),str2.end());
            if (str1 == str2)
                return true;
            else
                return false;
        } else
            return false;
    }
};