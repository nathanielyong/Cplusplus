#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long t, n, k;
    cin >> t;
    while (t--) {
        cin >> n >> k;
        if (k * k <= n && (n + k) % 2 == 0)
            cout << "YES\n";
        else 
            cout << "NO\n";
    }

    return 0;
}