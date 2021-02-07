#include <iostream>
#include <map>
#include <unordered_set>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n, num;
    cin >> t;
    while (t--)
    {
        cin >> n;
        map<int, int> m;
        unordered_set<int> s;
        for (int i = 0; i < n; ++i)
        {
            cin >> num;
            m[num]++;
            s.insert(num);
        }
        auto it = max_element(m.begin(), m.end(),
                               [](const pair<int, int> &p1, const pair<int, int> &p2) { return p1.second < p2.second; });
        int best = it->second;
        int nums = (int)s.size() - 1;
        if (best >= nums + 2) 
            nums++;
        cout << min(best, nums) << "\n";
    }

    return 0;
}