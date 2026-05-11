class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {

        vector<int> frequency(k, 0);
        frequency[0] = 1;

        int prefixSum = 0;
        int count = 0;

        for (int num : nums) {
            prefixSum += num;

            int rem = ((prefixSum % k) + k) % k;

            count += frequency[rem];

            frequency[rem]++;
        }

        return count;
    }
};