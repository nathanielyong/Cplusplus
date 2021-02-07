#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n, num;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    int lowest = *min_element(arr, arr+n);
    int highest = *max_element(arr, arr+n);
    long long combinations;
    if (lowest == highest) {
        combinations = (n*(n-1))/2;
        cout << highest - lowest << " " << combinations;
        return 0;
    }
    long long low_count = 0, high_count = 0;
    for (int i = 0; i < n; ++i) {
        if (arr[i] == lowest)
            low_count++;
        else if (arr[i] == highest)
            high_count++;
    }
    combinations = low_count * high_count;
    cout << highest - lowest << " " << combinations;

    return 0;
}