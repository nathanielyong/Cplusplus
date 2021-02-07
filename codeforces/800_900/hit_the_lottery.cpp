#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int bills[5] = {100, 20, 10, 5, 1};
    int n, current = 0, count = 0;
    cin >> n;
    while (n > 0) {
        if (n >= bills[current]) {
            n -= bills[current];
            count++;
        }
        else
            current++;
    }
    cout << count;
    return 0;
}