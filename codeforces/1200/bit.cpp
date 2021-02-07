#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tests, n=0;
    cin >> tests;
    while (tests--)
    {
        string s;
        cin >> s;
        if(s.find("++")!=string::npos)
            n++;
        else{
            n--;
        }
    }
    cout<<n;
    return 0;
}