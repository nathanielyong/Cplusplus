#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, num;
    cin >> n;
    multiset<int> m1, m2, m3;
    vector<int> v;
    for (int i = 0; i < n; ++i) {
        cin >> num;
        m1.insert(num);
    }
    for (int i = 0; i < n - 1; ++i) {
        cin >> num;
        m2.insert(num);
    }
    set_difference(m1.begin(), m1.end(), m2.begin(), m2.end(), back_inserter(v));
    for (int i = 0; i < n - 2; ++i) {
        cin >> num;
        m3.insert(num);
    }
    set_difference(m2.begin(), m2.end(), m3.begin(), m3.end(), back_inserter(v));
    for (int num : v) {
        cout << num << "\n";
    }

    return 0;
}