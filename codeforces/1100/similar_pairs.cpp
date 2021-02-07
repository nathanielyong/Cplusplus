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
        bool flag = false;
        int even = 0, odd = 0;
        int arr[n];
        for (int i = 0; i < n; ++i) {
            cin >> num;
            if (num % 2 == 0)
                even++;
            else
                odd++;
            arr[i] = num; 
        }
        if (even % 2 == 0 && odd % 2 == 0) 
            cout << "YES\n";
        else {
            sort(arr, arr + n);
            for (int i = 0; i < n - 1; ++i) {
                if (arr[i + 1] - arr[i] == 1) {
                    cout << "YES\n";
                    flag = true;
                    break;
                }
            }
            if (!flag)
                cout << "NO\n";
        }
    }

    return 0;
}