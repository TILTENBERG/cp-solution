class Solution {
public:
    int maxTwoEvents(vector<vector<int>>& events) {
        int size = events.size();
        priority_queue<pair<int, int>, vector<pair<int, int>>,
                       greater<pair<int, int>>>
            pq;
        sort(events.begin(), events.end());
        int ans = 0;
        int mx = 0;

        for (auto& event : events) {
            while (!pq.empty() && pq.top().first < event[0]) {
                mx = max(mx, pq.top().second);
                pq.pop();
            }
            ans = max(ans, mx + event[2]);
            pq.push({event[1], event[2]});
        }
        return ans;
    }
};