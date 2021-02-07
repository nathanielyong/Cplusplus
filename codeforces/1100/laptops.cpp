#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    float a, b, worst = INT_MAX, best = INT_MIN;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a >> b;
        best = max(best, b/a);
        worst = min(worst, b/a);
    }
    if (best > worst) 
        cout << "Happy Alex";
    else 
        cout << "Poor Alex";

    return 0;
}