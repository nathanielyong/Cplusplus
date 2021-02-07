#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int odd = 0, even = 0;
        for (int i = 0, temp; i < n; ++i)
        {
            cin >> temp;
            if (temp % 2 == 0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
        int i;
        for (i = 1; i <= odd; i += 2)
        {
            if (x - i >= 0 && even >= x - i)
            {
                cout << "Yes\n";
                break;
            }
        }
        if (i > odd)
        {
            cout << "No\n";
        }
    }
    return 0;
}