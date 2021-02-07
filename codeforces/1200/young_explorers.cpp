#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; ++i){
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        int count = 0;
        int group_size = 0;
        for(int i = 0; i < n; ++i){
            if (group_size + 1 < v[i]){
                group_size++;
            } else if (group_size + 1 > v[i]) {
                count++;
                group_size = 1;
            }  else {
                count++;
                group_size = 0;
            }
        }
        cout << count << "\n";
    }

    return 0;
}