#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    long long a, b, x, y, n, n1, n2, n3, n4;
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> x >> y >> n;
        n1 = max(x, a - n);
        n2 = max(y, b - (n - (a - n1)));
        n3 = max(y, b - n);
        n4 = max(x, a - (n - (b - n3)));
        cout << min(n1 * n2, n3 * n4) << "\n";
    }
    return 0;
}