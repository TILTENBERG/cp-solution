class Solution {
public:
    int jump(vector<int>& nums) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        int ans = 0;
        int index = 0;
        while (index < nums.size() - 1) {
            int step = nums[index];
            if (index + step >= nums.size() - 1) {
                ans++;
                break;
            }
            int maxstep = 0;
            int maxind;
            for (int i = index + 1; i <= index + step; ++i) {
                if (i + nums[i] > maxstep) {
                    maxstep = nums[i]+i;
                     maxind= i;
                }
            }
            index=maxind;
            cout<<index<<" ";
            ans++;
        }
        return ans;
    }
};