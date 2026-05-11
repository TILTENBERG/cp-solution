class Solution {
public:
    int minOperations(vector<int>& nums) {
        int num1 = 0;
        int size=nums.size();
        int num = 0;
        for (int& i : nums) {
            if (i == 1)
                num1++;
            num = gcd(num, i);
        }
        if (num1 > 0)
            return size-num1;
        if (num > 1)
            return -1;
        int min_op = size;

        for (int i = 0; i < size; ++i) {
            int n = nums[i];
            for (int j = i + 1; j < size; ++j) {
                n = gcd(n, nums[j]);
                if (n == 1) {
                    min_op = min(min_op, j - i);
                    break;
                }
            }
        }
        return size - 1 + min_op;

        // 6 10 14 15
    }
};