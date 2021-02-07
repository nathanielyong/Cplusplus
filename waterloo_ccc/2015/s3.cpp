#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <numeric>

using namespace std;

int main()
{
    int g, p, plane;
    int count = 0;
    cin >> g >> p;
    int gates[g+1];
    vector<int> planes;
    for (int i = 0; i < p; ++i)
    {
        cin >> plane;
        planes.push_back(plane);
    }
    for (int i = 0; i < p; ++i)
    {
        int num = planes[i];
        int loc = gates[num];
        if (loc == 0)
        {
            gates[num]++;
            count++;
        }
        else if (loc>=0)
        {
            gates[num-loc]++;
            count++;
        }
        else
        {
            break;
        }
    }
    cout << count;
    return 0;
}