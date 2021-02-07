#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <unordered_map>

using namespace std;

int arr[3];
int solve(int n, unordered_map<int, int> &m) {
    if (m.count(n))
        return m[n];
    if (n == 0)
        return 0;
    int ans = -1;
    for (int num : arr) {
        if (n >= num)
            ans = max(ans, 1 + solve(n - num, m));
    }
    m[n] = ans;
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n >> arr[0] >> arr[1] >> arr[2];
    unordered_map<int, int> m;

    cout << solve(n, m);

    return 0;
}