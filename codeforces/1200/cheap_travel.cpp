#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, a, b;
    cin >> n >> m >> a >> b;

    int answer;
    if ((float)b / m < a) {
        answer = n/m*b+min((n%m)*a, b);
    } else {
        answer = n*a;
    }
    cout << answer;

    return 0;
}