#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n, count;
    long long sum, x;
    cin >> t;
    while (t--) {
        cin >> n >> x;
        long long arr[n];
        for (int i = 0; i < n; ++i) 
            cin >> arr[i];
        sort(arr, arr + n, greater<long long>());
        sum = 0, count = 0;
        for (int i = 0; i < n; ++i) {
            sum += arr[i];
            if (sum >= x * (i + 1)) 
                count++;
            else 
                break;
        }
        cout << count << "\n";
    }

    return 0;
}