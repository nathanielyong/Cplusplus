#include <iostream>
#include <algorithm>
using namespace std;

int arr[100005], dp[100005];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, ans = 1;
    cin >> n;
    for (int i = 0; i < n; ++i)
        cin >> arr[i];
    
    dp[0] = 1;
    for (int i = 1; i < n; ++i) {
        if (arr[i] > arr[i - 1])
            dp[i] = dp[i - 1] + 1;
        else
            dp[i] = 1;
        ans = max(dp[i], ans);
    }
    cout << ans;

    return 0;
}