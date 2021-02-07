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
        int n, ans = 0;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> v[i];
        }
        long long best = v[0];
        long long sum = 0;
        for (int i = 1; i < n; ++i)
        {
            if (v[i] > 0 == v[i - 1] > 0)
            {
                best = max<long long int>(best, v[i]);
            }
            else
            {
                sum += best;
                best = v[i];
            }
        }
        sum += best;
        cout << sum << "\n";
    }

    return 0;
}