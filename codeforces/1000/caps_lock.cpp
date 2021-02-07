#include <iostream>
using namespace std;

bool allUpper(string s) {
    for (int i = 1; i < s.length(); ++i) {
        if (islower(s[i])) {
            return false;
        }
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    if (allUpper(s)) {
        if (islower(s[0]))
            s[0] = toupper(s[0]);
        else
            s[0] = tolower(s[0]);
        for (int i = 1; i < s.length(); ++i) {
            s[i] = tolower(s[i]);
        }
    }
    
    cout << s;
    return 0;
}