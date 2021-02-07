#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m, num;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; ++i)
        scanf("%d", &arr[i]);
    sort(arr, arr + n);
    scanf("%d", &m);
    for (int i = 0; i < m; ++i) {
        scanf("%d", &num);
        cout << upper_bound(arr, arr + n, num) - arr << "\n";
    }
    return 0;
}