#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main()
{
    int j, a;
    int satisfied = 0;
    char jersey;
    cin >> j >> a;
    char jerseys[100005];
    map<int, vector<char>> requests;
    for (int i = 0; i < j; ++i)
    {
        cin >> jersey;
        jerseys[i] = jersey;
    }
    for (int i = 0; i < a; ++i)
    {
        int n;
        cin >> jersey >> n;
        requests[n].push_back(jersey);
    }
    for (int i = 0; i < j; ++i)
    {
        if (requests.count(i) > 0)
        {
            for (char c : requests[i])
            {
                if (jerseys[i] == c || jerseys[i] == 'L' || (jerseys[i] == 'M' && c == 'S'))
                {
                    satisfied++;
                    break;
                }
            }
        }
    }
    cout << satisfied;
    return 0;
}