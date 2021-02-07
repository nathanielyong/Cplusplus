#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <climits>

using namespace std;

int main()
{
    int n, a;
    double min = INT_MAX, size;
    vector<int> v;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(), v.end());
    for (int i = 1; i < n - 1; ++i)
    {
        size = double(v[i] - v[i - 1]) / 2 + double(v[i + 1] - v[i]) / 2;
        if (size < min)
        {
            min = size;
        }
    }
    cout << fixed << setprecision(1) << min;
    return 0;
}