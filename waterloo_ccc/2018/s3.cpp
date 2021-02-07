#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <sstream>
#include <limits>

using namespace std;

class Cell {
    public:
        int row, col;
};

vector<vector<char>> grid;
bool visited[100][100];
pair<int, int> start;
int n, m;

bool isConveyor(pair<int,int>cell) {

}

bool underCamera(pair<int, int> cell) {
    int row = cell.first, col = cell.second;
    if (grid[row][col] == 'C') {
        return false;
    }
    
}

void bfs(pair<int, int> start) {
    queue<pair<int, int>> q;
    pair<int, int> cell;
    char cell_value;
    q.push(start);

    while (!q.empty()) {
        cell = q.front();
        cell_value = grid[cell.first][cell.second];
        q.pop();
        if (cell_value != 'W' && !underCamera(cell)) {

        }
    }
}

int main()
{
    string a;
    char c;
    
    cin >> n >> m;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    for (int i = 0; i < n; ++i)
    {
        vector<char> v;
        getline(cin, a);
        stringstream ss(a);
        for (int j = 0; j < m; ++j)
        {
            ss >> c;
            v.push_back(c);
            if (c == 'S') 
                start = {i, j};
        }
        grid.push_back(v);
    }
        
}