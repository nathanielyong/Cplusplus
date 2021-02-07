#include <iostream>
#include <vector>
#include <queue>
#include <map>

using namespace std;

int main()
{
    int rows, cols, val;
    cin >> rows >> cols;
    pair<int, int> last_cell = {rows, cols};
    map<int, vector<pair<int, int>>> cells;
    vector<vector<bool>> visited(rows + 1, vector<bool>(cols + 1));

    for (int i = 1; i <= rows; ++i)
    {
        for (int j = 1; j <= cols; ++j)
        {
            cin >> val;
            cells[val].push_back({i, j});
        }
    }

    queue<pair<int, int>> q;
    q.push(last_cell);
    while (!q.empty())
    {
        pair<int, int> cell = q.front();
        q.pop();
        if (cells.count(cell.first * cell.second))
        {
            vector<pair<int, int>> adj = cells[cell.first * cell.second];
            for (pair<int, int> adj_cell : adj)
            {
                if (!visited[adj_cell.first][adj_cell.second])
                {
                    if (adj_cell.first == 1 & adj_cell.second == 1)
                    {
                        cout << "yes";
                        return 0;
                    }
                    visited[adj_cell.first][adj_cell.second] = true;
                    q.push(adj_cell);
                }
            }
        }
    }
    cout << "no";
    return 0;
}