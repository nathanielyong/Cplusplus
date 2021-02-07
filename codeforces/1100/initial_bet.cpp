#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int c1, c2, c3, c4, c5;
    cin >> c1 >> c2 >> c3 >> c4 >> c5;
    int sum = c1+c2+c3+c4+c5;
    if (sum != 0 && sum/5.0 == sum/5) 
        cout << sum/5;
    else
        cout << -1;
    

    return 0;
}