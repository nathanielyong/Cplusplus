#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n, q, l, r;
    long long ans = 0;
    cin >> n >> q;
    int arr[n], dp[n];
    memset(dp, 0, sizeof(dp));

    for (int i = 0; i < n; ++i) 
        cin >> arr[i];

    sort(arr, arr + n);
    for (int i = 0; i < q; ++i) {
        cin >> l >> r;
        dp[l - 1]++;
        if (r != n) 
            dp[r]--;
    }
    for (int i = 1; i < n; ++i)
        dp[i] += dp[i - 1];
    sort(dp, dp + n);
    for (int i = 0; i < n; ++i) 
        ans += arr[i] * 1LL * dp[i];
    cout << ans;
    return 0;
}