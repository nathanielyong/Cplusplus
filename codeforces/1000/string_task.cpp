#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    char vowels[6] = {'a', 'o', 'y', 'e', 'u', 'i'};
    string s;
    cin >> s;
    string result;
    for (int i = 0; i < s.length(); ++i) {
        if (!count(vowels, vowels + 6, tolower(s[i]))) {
            result += '.';
            result += tolower(s[i]);
        }
    }
    cout << result;
    return 0;
}