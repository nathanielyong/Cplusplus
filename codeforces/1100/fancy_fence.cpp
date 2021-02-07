#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, a;
    cin >> n;
    while(n--) {
        int a;
        cin >> a;
        float b = 360.0 / (180 - a);
        if (b == (int)b) 
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}