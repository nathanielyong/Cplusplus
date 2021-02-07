#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    long long x, y, a, b;
    cin >> t;
    while(t--) {
        cin >> x >> y >> a >> b;
        long long ans = min(y * a + x * a, a * abs(x - y) + b * min(x, y));
        cout << ans << "\n";
    }

    return 0;
}