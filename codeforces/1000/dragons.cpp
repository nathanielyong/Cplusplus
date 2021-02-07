#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int s, n, x, y;
    vector<pair<int, int>> v;
    cin >> s >> n;
    for (int i = 0; i < n; ++i) {
        cin >> x >> y;
        v.push_back({x, y});
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < n; ++i) {
        if (s > v[i].first) 
            s += v[i].second;
        else
        {
            cout << "NO";
            return 0;
        }
        
    }
    cout << "YES";

    return 0;
}