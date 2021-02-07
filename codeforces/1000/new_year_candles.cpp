#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b;
    cin >> a >> b;
    int hours = 0;
    while (1) {
        if (a - b >= 0) {
            hours += b;
            a -= b;
            a++;
        } else {
            hours += a;
            break;
        }
    }
    cout << hours;

    return 0;
}