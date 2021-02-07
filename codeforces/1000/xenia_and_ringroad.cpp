#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n, m;
    cin >> n >> m;
    long long tasks[m];
    for (int i = 0; i < m; ++i) {
        cin >> tasks[i];
    }
    long long loc = 1, time = 0;
    for (int i = 0; i < m; ++i) {
        if (tasks[i] > loc) {
            time += tasks[i] - loc;
        } else if (tasks[i] < loc) {
            time += n - loc + tasks[i];
        }
        loc = tasks[i];
    }
    cout << time;

    return 0;
}