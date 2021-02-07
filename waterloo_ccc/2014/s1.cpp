#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int k, m, num;
    cin >> k >> m;

    vector<int> friends(k);
    
    for (int i = 0; i < k; ++i)
    {
        friends[i] = i + 1;
    }
    for (int i = 0; i < m; ++i)
    {
        cin >> num;
        vector<int> temp;
        for (int j = 0; j < friends.size(); ++j)
        {
            if ((j + 1) % num != 0)
            {
                temp.push_back(friends[j]);
            }
        }
        friends = temp;
    }

    for (int i = 0; i < friends.size(); ++i)
    {
        cout << friends[i] << "\n";
    }
    return 0;
}