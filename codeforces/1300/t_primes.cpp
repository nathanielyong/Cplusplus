#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int x)
{
    if (x <= 1)
        return false;
    if (x <= 3)
        return true;
    if (x % 2 == 0 || x % 3 == 0)
        return false;
    for (int i = 5; i <= floor(sqrt(x)); i += 6)
    {
        if (x % i == 0 || x % (i + 2) == 0)
            return false;
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    long long x;
    cin >> n;
    while (n--)
    {
        cin >> x;
        if (sqrt(x) == floor(sqrt(x)) && isPrime(sqrt(x)))
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}