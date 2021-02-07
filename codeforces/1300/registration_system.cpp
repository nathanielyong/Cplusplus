#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    string name;
    cin >> n;
    unordered_map<string, int> m;
    while (n--)
    {
        cin >> name;
        if (m.count(name))
            cout << name << m[name] << "\n";
        else 
            cout << "OK\n";
        m[name]++;
    }
    return 0;
}