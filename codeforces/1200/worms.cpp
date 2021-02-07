#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, a;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i)
    {
        a;
        cin >> a;
        if (i != 0)
        {
            v[i] = v[i - 1] + a;
        }
        else
        {
            v[i] = a;
        }
    }
    cin >> m;
    for (int i = 0; i < m; ++i)
    {
        int w;
        cin >> w;
        int l = 0;
        int r = n - 1;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (mid == 0 && w <= v[mid] || w <= v[mid] && w > v[mid - 1])
            {
                cout << mid + 1 << "\n";
                break;
            }
            if (w > v[mid])
            {
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
    }

    return 0;
}