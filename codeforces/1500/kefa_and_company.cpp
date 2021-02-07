#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n, d, m, s;
    cin >> n >> d;
    pair<int, int> friends[n];
    for (int i = 0; i < n; ++i) {
        cin >> m >> s;
        friends[i] = {m, s};
    }
    sort(friends, friends + n);
    int i = 0, j = 0;
    long long ans = 0, sum = 0;
    while (i < n && j < n) {
        if (friends[j].first - friends[i].first < d) 
            sum += friends[j++].second;
        else 
            sum -= friends[i++].second;
        ans = max(ans, sum);
    }
    cout << ans;

    return 0;
}