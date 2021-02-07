#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    int m, l, r, cnt = 0;
    cin >> s >> m;
    int dp[s.length()] {};
    for (int i = 1; i < s.length(); ++i) {
        if (s[i] == s[i - 1]) 
            dp[i] = dp[i-1] + 1;
        else 
            dp[i] = dp[i-1];
    }
    while (m--) {
        cin >> l >> r;
        cout << dp[r - 1] - dp[l - 1] << "\n";
    }
    return 0;
}