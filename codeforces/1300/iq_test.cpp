#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int x, parity = 0, last_odd, last_even;
    for (int i = 0; i < n; ++i) {
        cin >> x;
        if (x % 2 == 0){
            parity++;
            last_even = i + 1;
        } else {
            parity--;
            last_odd = i + 1;
        }
    }
    cout << (parity > 0 ? last_odd : last_even);

    return 0;
}