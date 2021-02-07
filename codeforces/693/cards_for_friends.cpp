#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int t, w, h, n;
    int sheets;
    cin >> t;
    for (int i = 0; i < t; ++i)
    {
        cin >> w >> h >> n;
        sheets = 1;
        while (1)
        {
            if (w % 2 == 0)
            {
                w /= 2;
                sheets *= 2;
            }
            else if (h % 2 == 0)
            {
                h /= 2;
                sheets *= 2;
            }
            else
            {
                break;
            }
            if (sheets >= n)
            {
                break;
            }
        }
        if (sheets >= n)
        {
            cout << "YES" << "\n";
        }
        else
        {
            cout << "NO" << "\n";
        }
    }

    return 0;
}