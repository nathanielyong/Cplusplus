#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n, num;
    cin >> t;
    while (t--) {
        cin >> n;
        int arr[n];
        int ans = true;
        for (int i = 0; i < n; ++i)
            cin >> arr[i];

        for (int i = 0; i < n; ++i) {
            if (arr[i] == 1 && i != n - 1)
                ans = !ans;
            else 
                break;
        }
        if (ans) 
            cout << "First\n";
        else
            cout << "Second\n";
    }
    return 0;
}