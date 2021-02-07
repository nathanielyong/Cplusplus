#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, l;
    cin >> n >> l;
    vector<int> lanterns(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> lanterns[i];
    }
    sort(lanterns.begin(), lanterns.end());
    int best = 0;
    for (int i = 1; i < n; ++i)
    {
        int current = lanterns[i] - lanterns[i - 1];
        best = max(best, current);
    }
    double answer = fmax((double)best/2.0, (double)lanterns[0]);
    answer = fmax(answer, (double)l - lanterns[n-1]);
    cout.precision(10);
    cout << fixed << answer;

    return 0;
}