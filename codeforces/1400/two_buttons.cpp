#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, ans = 0;
    cin >> n >> m;
    if (n >= m) {
        cout << n - m << "\n";
        return 0;
    }

    while (n < m)
    {
        if (m % 2)
            m++;
        else
            m /= 2;
        ans++;
    }
    ans += n - m;
    cout << ans;

    return 0;
}