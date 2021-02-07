#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, t;
    cin >> n >> t;
    int num[n] {};
    if (n == 1 && t == 10) { 
        cout << -1;
    }
    else {
        if (t == 10) {
            cout << 1;
            for (int i = 0; i < n - 1; ++i)
                cout << 0;
        } else {
            for (int i = 0; i < n; ++i) 
                cout << t;
        }
    }

    return 0;
}