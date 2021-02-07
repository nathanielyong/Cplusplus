#include <iostream>
#include <stack>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n, closing;
    string brackets;
    cin >> t;
    while (t--) {
        closing = 0;
        cin >> n >> brackets;
        stack<int> s;
        for (char c : brackets) {
            if (c == '(') 
                s.push(c);
            else if (!s.empty())
                s.pop();
            else
                closing++;
        }
        cout << max(closing, (int)s.size()) << "\n";
    }

    return 0;
}