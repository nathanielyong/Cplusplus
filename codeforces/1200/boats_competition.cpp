#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    map<int, int> m;
    for (int i = 0, temp; i < n; ++i)
    {
        cin >> temp;
        m[temp]++;
    }
    int answer = 0;
    for (int i = 2; i <= m.rbegin()->first * 2; ++i)
    {
        int count = 0;
        for (auto j : m)
        {
            int partner = i - j.first;
            if (partner <= 0)
            {
                break;
            }
            else if (m.count(partner))
            {
                count += min(j.second, m[partner]);
            }
        }
        answer = max(answer, count);
    }
    cout << answer / 2 << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}