#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n, num;
    bool flag;
    cin >> t;
    while (t--) {
        cin >> n;
        flag = false;
        unordered_map<int, vector<int>> m;
        for (int i = 0; i < n; ++i) {
            cin >> num;
            m[num].push_back(i);
        }
        for (auto& k : m) {
            if (k.second.back() - k.second.front() >= 2) {
                flag = true;
                break;
            }
        }
        if (flag)
            cout << "YES\n";
        else 
            cout << "NO\n";
    }

    return 0;
}