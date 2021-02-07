#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int arr[n][3];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < 3; ++j) {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < 3; ++i) {
        int col_sum = 0;
        for (int j = 0; j < n; ++j) {
            col_sum += arr[j][i];
        }
        if (col_sum != 0) 
        { 
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}