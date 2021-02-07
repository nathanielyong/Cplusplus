#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int n;
    string name, answer = "good";
    cin >> n;
    vector<string> s1(n);
    vector<string> s2(n);
    for (int i = 0; i < s1.size(); ++i)
    {
        cin >> name;
        s1[i] = name;
    }
    for (int i = 0; i < s2.size(); ++i)
    {
        cin >> name;
        s2[i] = name;
    }
    for (int i = 0; i < n; ++i)
    {
        if (s1[i] == s2[i])
        {
            answer = "bad";
            break;
        }
        for (int j = i; j < n; ++j)
        {
            if (s1[j] == s2[i] && s2[j] != s1[i])
            {
                answer = "bad";
                break;
            }
        }
        if (answer == "bad")
            break;
    }
    cout << answer;
    return 0;
}