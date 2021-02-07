#include <iostream>
#include <algorithm>
using namespace std;

int arr[100005];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n, t, sum = 0, cnt = 0, ans = 0, start = 0;
    cin >> n >> t;
    for (int i = 0; i < n; ++i) 
        cin >> arr[i];
    
    for (int i = 0; i < n; ++i) {
        sum += arr[i];
        cnt++;
        while (sum > t) {
            sum -= arr[start];
            start++;
            cnt--;
        }
        ans = max(ans, cnt);
    }
    cout << ans;
    return 0;
}