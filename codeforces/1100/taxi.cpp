#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, count = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    int left = 0, right = n - 1;
    while (left < right)
    {
        if (arr[left] + arr[right] <= 4)
        {
            arr[right] += arr[left];
            left++;
        }
        else
        {
            right--;
            count++;
        }
    }
    cout << count + 1;

    return 0;
}