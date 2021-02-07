#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, a;
    cin >> n;
    vector<vector<int>> v;
    
    for (int i = 0; i < n; ++i) {
        vector<int> row;
        for (int j = 0; j < n; ++j) {
            cin >> a;
            row.push_back(a);     
        }
        v.push_back(row);
    }
    if (v[0][0] < v[0][1] && v[0][0] < v[1][0]) {
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                cout << v[i][j] << " ";
            }
            cout << "\n";
        }
    }
    else if (v[0][0] > v[0][1] && v[0][0] > v[1][0]) {
        for (int i = n - 1; i >= 0; --i) {
            for (int j = n - 1; j >= 0; --j) {
                cout << v[i][j] << " ";
            }
            cout << "\n";
        }
    }
    else if (v[0][0] > v[0][1] && v[0][0] < v[1][0]) {
        for (int i = n - 1; i >= 0; --i) {
            for (int j = 0; j < n; ++j) {
                cout << v[j][i] << " ";
            }
            cout << "\n";
        }
    }
    else {
        for (int i = 0; i < n; ++i) {
            for (int j = n - 1; j >= 0; --j) {
                cout << v[j][i] << " ";
            }
            cout << "\n";
        }
    }

    return 0;
}