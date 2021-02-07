#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int  t, n, m, num;
    cin >> t;
    while (t--) {
        cin >> n >> m;
        bool turn = true;
        bool rows[n] {};
        bool cols[m] {};
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cin >> num;
                if (num == 1) {
                    rows[i] = true;
                    cols[j] = true;
                }
            }
        }
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (!rows[i] && !cols[j]) {
                    rows[i] = true;
                    cols[j] = true;
                    turn = !turn;
                }
            }
        }
        if (turn) 
            cout << "Vivek\n";
        else
            cout << "Ashish\n";
    }

    return 0;
}