#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n, d;
    cin >> t;
    while (t--) {
        cin >> n >> d;
        int arr[n];
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        if (arr[n - 1] <= d) 
            cout << "YES\n"; 
        else {
            if (arr[0] + arr[1] > d) 
                cout << "NO\n";
            else
                cout << "YES\n";
        }
    }


    return 0;
}