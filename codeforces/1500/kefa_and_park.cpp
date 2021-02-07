#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int visited[100005]{}, cats[100005];
vector<int> adj[100005];

int dfs(int current, int catsSeen, int m)
{
    int ans = 0;
    visited[current] = 1;
    if (catsSeen > m)
        return 0;
    int len = adj[current].size();
    if (len == 1 && current != 1)
        return 1;

    for (int i = 0; i < len; ++i)
    {
        int node = adj[current][i];
        if (!visited[node])
            ans += dfs(node, cats[node] ? 1 + catsSeen : 0, m);
    }
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, u, v;
    cin >> n >> m;
    for (int i = 1; i <= n; ++i)
        cin >> cats[i];
    for (int i = 0; i < n - 1; ++i)
    {
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    cout << dfs(1, cats[1] ? 1 : 0, m);

    return 0;
}