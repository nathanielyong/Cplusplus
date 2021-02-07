#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string names[5] = {"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
    long long n, i = 1;
    cin >> n;
    while (i * 5 < n) {
        n -= i * 5;
        i *= 2;
    }
    cout << names[(n - 1) / i];

    return 0;
}