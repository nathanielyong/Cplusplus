#include <iostream>
using namespace std;

const int INF = 1e5 + 5;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n, m, q, u, v, w, a, b;
    cin >> n >> m >> q;
    int distance[n + 1][n + 1];

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            if (i == j)
                distance[i][j] = 0;
            else
                distance[i][j] = INF;
        }
    }
    while (m--) {
        cin >> u >> v >> w;
        distance[u][v] = w;
        distance[v][u] = w;
    }
    for (int k = 1; k <= n; ++k) 
        for (int i = 1; i <= n; ++i) 
            for (int j = 1; j <= n; ++j) 
                distance[i][j] = min(distance[i][j], distance[i][k] | distance[k][j]);

    while (q--) {
        cin >> a >> b;
        cout << distance[a][b] << "\n";
    }

    return 0;
}