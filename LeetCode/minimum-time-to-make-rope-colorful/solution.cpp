class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int ans = 0;
        char prev = colors[0];
        int rmv = neededTime[0];
        int sum = neededTime[0];
        for (int i = 1; i < colors.size(); ++i) {
            if (colors[i] != prev) {
                ans += (sum - rmv);
                rmv = neededTime[i];
                prev = colors[i];
                sum = neededTime[i];
            } 
            else {
                sum += neededTime[i];
                rmv = max(rmv, neededTime[i]);
            }
        }
         ans += (sum - rmv);
        return ans;
    }
};