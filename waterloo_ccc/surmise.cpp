#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    int n, t, u;
    float max = 0;
    vector<pair<int, int>> v;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> t >> u;   
        v.push_back(make_pair(t, u));
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < n; ++i) {
        if (v[i] != v.back()) {
            float speed = fabs(float(v[i+1].second - v[i].second)/float(v[i+1].first - v[i].first));
            if (speed >= max) {
                max = speed;
            }
        }
    }
    cout << max;
    return 0;
}