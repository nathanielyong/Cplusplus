#include <iostream>
using namespace std;

long long divide_ceil(long long a, long long b) {
    return (a + b - 1) / b;
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t;
    long long a, x, y, k;
    cin >> t;
    while (t--) {
        cin >> x >> y >> k;
        cout << k + divide_ceil(k * y + k - 1, x - 1) << "\n";
    }

    return 0;
}