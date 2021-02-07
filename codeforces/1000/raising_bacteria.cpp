#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n, cnt = 0;
    cin >> n;
    while (n) {
        if (n % 2) 
            cnt++;     
        n /= 2;
    }
    cout << cnt;

    return 0;
}