#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

long long combinations(long long n) {
    return n * (n - 1) / 2;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    long long split = n / m, remain = n % m;
    long long max = combinations(n - m + 1);
    long long even = combinations(split) * (m - remain);
    long long remaining = combinations(split + 1) * remain;
    long long min = even + remaining;

    cout << min << " " << max;

    return 0;
}