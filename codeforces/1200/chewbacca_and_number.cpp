#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long x;
    cin >> x;
    int arr[20];
    int digit, i = 0;
    while (x > 0)
    {
        digit = x % 10;
        if (9 - digit < digit)
            arr[i] = 9 - digit;
        else
            arr[i] = digit;

        i++;
        x /= 10;
    }
    if (arr[i - 1] == 0)
    {
        cout << 9;
        i--;
    }
    for (int j = i - 1; j >= 0; --j)
    {
        cout << arr[j];
    }

    return 0;
}