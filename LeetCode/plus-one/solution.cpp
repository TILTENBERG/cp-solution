class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int size = digits.size();
        for (int i = size - 1; i >= 0; --i) {
            int dig = digits[i];
            if (dig + 1 != 10) {
                digits[i]++;
                break;
            } else {
                digits[i] = 0;
                if (i == 0) {
                    digits.insert(digits.begin(), 1);
                }
            }
        }
        return digits;
    }
};