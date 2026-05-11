class Solution {
public:
    long long minimumCost(string source, string target, vector<char>& original,
                          vector<char>& changed, vector<int>& cost) {

        vector<vector<pair<int, int>>> adj(26);
        for (int i = 0; i < original.size(); ++i) {
            adj[original[i] - 'a'].push_back({changed[i] - 'a', cost[i]});
        }

        // 2. Pre-calculate shortest paths from EVERY letter (0-25) to all
        // others min_costs[i][j] = cost to change letter i to letter j
        vector<vector<long long>> min_costs(26, vector<long long>(26, -1));

        for (int start_node = 0; start_node < 26; ++start_node) {
            // Run Dijkstra for this start_node
            priority_queue<pair<int, int>, vector<pair<int, int>>,
                           greater<pair<int, int>>>
                pq;
            vector<long long> dist(26, -1); // -1 means unreachable

            pq.push({0, start_node});
            dist[start_node] = 0;

            while (!pq.empty()) {
                auto [d, u] = pq.top();
                pq.pop();

                if (dist[u] != -1 && d > dist[u])
                    continue;

                for (auto& edge : adj[u]) {
                    int v = edge.first;
                    int weight = edge.second;

                    if (dist[v] == -1 || dist[u] + weight < dist[v]) {
                        dist[v] = dist[u] + weight;
                        pq.push({(int)dist[v], v});
                    }
                }
            }
            // Save the results for this start node
            min_costs[start_node] = dist;
        }

        // 3. Calculate the total cost for the string
        long long total_ans = 0;
        for (int i = 0; i < source.size(); ++i) {
            int u = source[i] - 'a';
            int v = target[i] - 'a';

            if (u == v)
                continue; // No cost to change 'a' to 'a'

            long long path_cost = min_costs[u][v];

            if (path_cost == -1)
                return -1;

            total_ans += path_cost;
        }

        return total_ans;
    }
};