#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int arr[2][2] = {{1, 2}, {3, 4}};
    string flips;
    cin >> flips;

    for (char&c : flips) {
        if (c == 'H') {
            reverse(begin(arr), end(arr));
        }
        if (c == 'V') {
            reverse(begin(arr[0]), end(arr[0]));
            reverse(begin(arr[1]), end(arr[1]));
        }
    }
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
}