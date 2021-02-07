#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve(int arr[], int n)
{
    if (n == 1)
    {
        printf("yes\n%d %d", 1, 1);
        return;
    }

    int i = 1;
    while (i < n && arr[i - 1] < arr[i])
        i++;

    if (i == n)
    {
        printf("yes\n%d %d", 1, 1);
        return;
    }

    int j = i;
    while (j < n && arr[j] < arr[j - 1])
    {
        if (i > 1 && arr[j] < arr[i - 2])
        {
            printf("no");
            return;
        }
        j++;
    }
    if (j == n)
    {
        printf("yes\n%d %d", i, j);
        return;
    }

    int k = j;
    if (arr[k] < arr[i - 1])
    {
        printf("no");
        return;
    }
    while (k > 1 && k < n)
    {
        if (arr[k] < arr[k - 1])
        {
            printf("no");
            return;
        }
        k++;
    }
    printf("yes\n%d %d", i, j);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    solve(arr, n);

    return 0;
}