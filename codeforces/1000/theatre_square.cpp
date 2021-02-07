#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n, m, a;
    cin >> n >> m >> a;
    long long ans = ceil(n/(double)a) * ceil(m/(double)a);
    cout << ans;
    return 0;
}