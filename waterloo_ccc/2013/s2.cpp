#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int main()
{
    int w, n, car;
    int count = 0, curr_weight = 0;
    vector<int> cars;
    queue<int> q;
    cin >> w >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> car;
        cars.push_back(car);
    }
    for (int i = 0; i < cars.size(); ++i)
    {
        if (i < 4)
        {
            curr_weight += cars[i];
            if (curr_weight <= w)
            {
                q.push(cars[i]);
                count++;
            }
            else
            {
                break;
            }
        }
        else
        {
            curr_weight -= q.front();
            q.pop();
            curr_weight += cars[i];
            if (curr_weight < w)
            {
                q.push(cars[i]);
                count++;
            }
            else
            {
                break;
            }
        }
    }
    cout << count;
    return 0;
}