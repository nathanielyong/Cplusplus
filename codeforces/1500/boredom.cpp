#include <iostream>
#include <algorithm>
using namespace std;

long long arr[100005] {}, dp[100005];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, mx = 0, num;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> num, arr[num]++;
        mx = max(mx, num);
    }
    dp[0] = 0;
    dp[1] = arr[1];
    for (int i = 2; i <= mx; ++i) 
        dp[i] = max(dp[i - 1], dp[i - 2] + arr[i] * i);
    cout << dp[mx] << "\n";
    return 0;
}