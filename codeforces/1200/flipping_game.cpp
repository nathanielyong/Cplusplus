#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> v(n);
    int ones = 0;
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
        if (v[i] == 1)
        {
            ones++;
        }
    }
    if (ones==n){
        cout << n - 1;
        return 0;
    }
    int count = 0;
    int answer = 0;
    for (int i = 0; i < n; ++i)
    {
        if(v[i]==0){
            count++;
        } else {
            count--;
        }
        if (count < 0){
            count = 0;
        }
        answer = max(answer, count);
    }
    cout << answer + ones;
    return 0;
}