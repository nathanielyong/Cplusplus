#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int q, n, a;
    int sum = 0;
    vector <int>d, p;
    cin >> q >> n;
    for (int i=0;i<n;++i) {
        cin >> a;
        d.push_back(a);
    }
    for (int i=0;i<n;++i) {
        cin >> a;
        p.push_back(a);
    }
    if (q == 1) {
        sort(d.begin(), d.end());
        sort(p.begin(), p.end());
        for (int i=0;i<n;++i){
            sum+= max(d[i], p[i]);
        }
    }
    if (q == 2) {
        sort(d.begin(), d.end());
        sort(p.rbegin(), p.rend());
        for (int i=0;i<n;++i){
            sum+= max(d[i], p[i]);
        }
    }
    cout << sum;
    return 0;    
}