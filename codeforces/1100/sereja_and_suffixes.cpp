#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, l;
    cin >> n >> m;
    int arr[n + 1], dp[n + 1]{};
    unordered_set<int> s;
    for (int i = 1; i <= n; ++i) { 
        cin >> arr[i];
    }
    dp[n] = 1;
    s.insert(arr[n]);
    for (int i = n - 1; i >= 0; --i) {
        if (!s.count(arr[i])) {
            dp[i] = dp[i + 1] + 1;
            s.insert(arr[i]);
        } else 
            dp[i] = dp[i + 1];
    }    
    for (int i = 0; i < m; ++i) {
        cin >> l;
        cout << dp[l] << "\n";
    }

    return 0;
}