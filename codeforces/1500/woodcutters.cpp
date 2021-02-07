#include <iostream>
#include <climits>
using namespace std;

int loc[100005], heights[100005];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, x, h, cnt;
    cin >> n;
    n > 1 ? cnt = 2 : cnt = 1;
    for (int i = 0; i < n; ++i) 
        cin >> loc[i] >> heights[i];
    int occupied = 0;
    for (int i = 1; i < n - 1; ++i) {
        if (loc[i] - heights[i] > loc[i - 1] + occupied) {
            cnt++;
            occupied = 0;
        }
        else if (loc[i] + heights[i] < loc[i + 1]) {
            cnt++;
            occupied = heights[i];
        } else 
            occupied = 0;
    }
    cout << cnt;

    return 0;
}