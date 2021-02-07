#include <iostream>
#include <stack>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, t, current = 0, next;
    cin >> n >> t;
    int cells[n] {};
    for (int i = 0; i < n - 1; ++i) {
        cin >> cells[i];
    }
    while (current < t - 1) 
        current += cells[current];

    current == t - 1 ? cout << "YES" : cout << "NO";
    return 0;
}