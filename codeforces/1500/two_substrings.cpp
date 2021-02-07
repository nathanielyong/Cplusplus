#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s, ans = "NO";
    cin >> s;
    int loc1 = s.find("AB");
    int loc2 = s.find("BA", loc1 + 2);
    if (loc1 != string::npos && loc2 != string::npos && abs(loc1 - loc2) > 1) 
        ans = "YES";
    loc2 = s.find("BA");
    loc1 = s.find("AB", loc2 + 2);
    if (loc1 != string::npos && loc2 != string::npos && abs(loc1 - loc2) > 1) 
        ans = "YES";
    cout << ans;
    return 0;
}