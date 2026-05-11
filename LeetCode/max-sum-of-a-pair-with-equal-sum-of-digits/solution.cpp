class Solution {
public:
    int maximumSum(vector<int>& nums) {
        int size = nums.size();
        int ans = -1;
        unordered_map<int, pair<int, int>> mp;

        for (int i = 0; i < size; ++i) {
            int num = digitsum(nums[i]);
            if (mp.find(num) != mp.end()) {
                if (mp[num].second < nums[i]) {
                    mp[num] = make_pair(mp[num].second, nums[i]);
                    
                } else if (mp[num].first < nums[i]) {
                    mp[num].first = nums[i];
                    
                }
            } else {
                mp[num] = make_pair(-nums[i] - 1, nums[i]);
                
            }
            ans = max(ans, mp[num].first + mp[num].second);
        }
        return ans;
    }

 

    int digitsum(int& a) {
        int n = a;
        int sum = 0;
        while (n > 0) {
            sum += (n % 10);
            n /= 10;
        }
        return sum;
    }
};