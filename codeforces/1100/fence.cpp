#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, h, sum = 0;
    cin >> n >> h;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    for (int i = 0; i < h; ++i)
        sum += arr[i];

    int best_sum = sum, idx_ans = 1;
    for (int i = 1; i < n - h + 1; ++i) {
        sum -= arr[i - 1];
        sum += arr[i + h - 1];
        if (best_sum > sum) { 
            best_sum = sum;
            idx_ans = i + 1;
        }
    }
    cout << idx_ans;

    return 0;
}