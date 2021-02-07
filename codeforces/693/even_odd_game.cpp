#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int main()
{
    int tests, n;
    long long alice, bob;
    cin >> tests;
    for (int t = 0; t < tests; ++t)
    {
        alice = 0;
        bob = 0;
        cin >> n;
        vector<long long> v(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end(), greater<long long>());
        for (int i = 0; i < n; ++i)
        {
            if (i % 2 == 0)
            {
                if (v[i] % 2 == 0)
                    alice += v[i];
            }
            else
            {
                if (v[i] % 2 == 1)
                    bob += v[i];
            }
        }
        if (alice > bob)
        {
            cout << "Alice" << endl;
        }
        else if (alice < bob)
        {
            cout << "Bob" << endl;
        }
        else
        {
            cout << "Tie" << endl;
        }
    }

    return 0;
}