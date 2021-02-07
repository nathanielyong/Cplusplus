#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int main()
{
    int t, n, a;
    int sum;
    cin >> t;
    for (int i = 0; i < t; ++i)
    {
        cin >> n;
        int ones;
        int twos;
        sum = 0;
        for (int j = 0; j < n; ++j)
        {
            cin >> a;
            sum += a;
            if (a == 1)
            {
                ones++;
            }
            else
            {
                twos++;
            }
        }
        if (sum % 2 == 0 && n % 2 == 0)
        {
            cout << "YES"
                 << "\n";
        }
        else if (sum%2==0)
        { 
            if (ones % 2 == 0 && ones > 0 && twos % 2 != 0)
                cout << "YES"
                     << "\n";
            else
                cout << "NO"
                     << "\n";
        } else {
            cout << "NO" <<"\n";
        }
    }

    return 0;
}