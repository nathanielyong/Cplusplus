#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        vector<int> v(n);
        deque<int> answer;
        for (int i = 0; i < n; ++i)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        int i = 0, j = n - 1;

        while (i <= j)
        {
            if (i == j)
            {
                answer.push_front(v[i]);
            }
            else
            {
                answer.push_front(v[j]);
                answer.push_front(v[i]);
            }
            i++;
            j--;
        }
        for (int num : answer)
        {
            cout << num << " ";
        }
        cout << "\n";
    }

    return 0;
}