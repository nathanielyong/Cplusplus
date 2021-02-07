#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    long long a, b;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        cout << min((a + b) / 3, min(a, b)) << "\n";
    }

    return 0;
}