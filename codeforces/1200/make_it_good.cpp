#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int solve(vector<int> &v)
{
    int peak = v.size() - 1;
    for (int i = v.size() - 2; i >= 0; --i){
        if (v[i] >= v[i + 1]){
            peak = i;
        } else {
            break;
        }
    }
    int goodArray = peak;
    for (int i = peak - 1; i >= 0; --i){
        if(v[i] <= v[i + 1]){
            goodArray = i;
        } else {
            break;
        }
    }
    return goodArray;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> v[i];
        }
        cout << solve(v) << "\n";
    }

    return 0;
}