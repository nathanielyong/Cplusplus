#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, a, k = 0;
    int total1 = 0; 
    int total2 = 0;
    cin >> n;
    vector<int> t1;
    vector<int> t2;

    for (int i = 0; i < n; ++i) { 
        cin >> a;
        t1.push_back(a);
    }
    for (int i = 0; i < n; ++i) { 
        cin >> a;
        t2.push_back(a);
    }
    for (int i = 0; i < n; ++i) {
        total1 += t1[i];
        total2 += t2[i];
        if (total1 == total2) {
            k = i + 1;
        }
    }

    cout << k;

    return 0;
}