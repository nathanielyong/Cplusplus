#include <iostream>
#include <algorithm>
using namespace std;

int a[1000], b[1000];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, count = 0;
    bool prev = false;
    cin >> n;
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    for (int i = 0; i < n; ++i)
        cin >> b[i];
    for (int i = 0; i < n; ++i) {
        if (i == 0 && a[i] == b[i] || a[i] == b[i] && a[i - 1] != b[i - 1]) 
            count++;
    }
    cout << count;
    return 0;
}