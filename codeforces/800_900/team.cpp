#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, a, b, c, good, cnt = 0;
    cin >> n;
    while (n--) {
        cin >> a >> b >> c;
        good = 0;
        if (a == 1)
            good++;
        if (b == 1)
            good++;
        if (c == 1)
            good++;
        if (good >= 2)
            cnt++;
    }
    cout << cnt;

    return 0;
}