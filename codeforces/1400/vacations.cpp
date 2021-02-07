#include <iostream>
#include <algorithm>
using namespace std;

int arr[105], dp[105][3];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i) 
        cin >> arr[i];
    for (int i = 0; i < 3; ++i)
        dp[0][i] = 0;
    
    for (int i = 1; i <= n; ++i) {
        dp[i][0] = min({dp[i-1][0], dp[i-1][1], dp[i-1][2]}) + 1;
        
        if (arr[i] == 1 || arr[i] == 3) 
            dp[i][1] = min(dp[i - 1][0], dp[i - 1][2]);
        else 
            dp[i][1] = dp[i - 1][1] + 1;

        if (arr[i] == 2 || arr[i] == 3) 
            dp[i][2] = min(dp[i - 1][0], dp[i - 1][1]);
        else 
            dp[i][2] = dp[i - 1][2] + 1;
    }
    cout << min({dp[n][0], dp[n][1], dp[n][2]});

    return 0;
}