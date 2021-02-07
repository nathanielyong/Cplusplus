#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string target = "hello", s;
    cin >> s;
    int current = 0;
    for (char c : s) {
        if (c == target[current]) {
            current++;
            if (current == 5) {
                cout << "YES";
                return 0;
            } 
        }
    }
    cout << "NO";

    return 0;
}