#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n;
    vector<int> boys(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> boys[i];
    }
    cin >> m;
    vector<int> girls(m);
    for (int i = 0; i < m; ++i)
    {
        cin >> girls[i];
    }
    sort(boys.begin(), boys.end());
    sort(girls.begin(), girls.end());
    int count = 0;
    while(!boys.empty() && !girls.empty())
    {
        if (abs(boys.back() - girls.back()) <= 1)
        {  
            count++;
            boys.pop_back();
            girls.pop_back();
        }
        else if (boys.back() > girls.back())
        {
            boys.pop_back();
        }
        else if (boys.back() < girls.back())
        {
            girls.pop_back();
        }
    }
    cout << count;

    return 0;
}