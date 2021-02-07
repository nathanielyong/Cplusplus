#include <iostream>
#include <queue>
#include <vector>
#include <climits>
#include <cstring>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n, m, q, u, v, k, a, b, current;
    cin >> n >> m >> q;
    vector<pair<int, int>> adj[n + 1];

    for (int i = 0; i < m; ++i) {
        cin >> u >> v >> k;
        adj[u].push_back({v, k});
        adj[v].push_back({u, k});
    }
    
    for (int i = 0; i < q; ++i) {
        cin >> a >> b;

        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        bool processed[n + 1];
        memset(processed, false, sizeof(processed));
        
        int distance[n + 1];
        for (int j = 0; j <= n; ++j) 
            distance[j] = INT_MAX;

        distance[a] = 0;
        pq.push({0, a});
        while (!pq.empty()) {
            current = pq.top().second; 
            pq.pop();
            if (processed[current]) 
                continue;

            processed[current] = true;
            for (auto x : adj[current]) {
                int y = x.first, w = x.second;
                if (distance[current] + w < distance[y]) {
                    distance[y] = distance[current] + w;
                    pq.push({distance[y], y});
                }    
            }
        }
        cout << distance[b] << "\n";
    }
    return 0;
}