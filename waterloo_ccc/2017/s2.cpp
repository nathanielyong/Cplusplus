#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    int n, a;
    cin >> n;
    vector<int>v, low_tide, high_tide, result;
    for (int i=0;i<n;++i) {
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(), v.end());
    
    for (int i = 0; i < n;++i) {
        if (i < ceil((float)n/2)) {
            low_tide.push_back(v[i]);
        }
        else {
            high_tide.push_back(v[i]);
        }
    }
    reverse(low_tide.begin(), low_tide.end());

    for (int i=0;i<n;++i){
        if (i%2==0) {
            result.push_back(low_tide.front());
            low_tide.erase(low_tide.begin());
        }
        else {
            result.push_back(high_tide.front());
            high_tide.erase(high_tide.begin());
        }
    }
    for (int i=0;i<n;++i){
        cout<<result[i] <<" ";
    }
    return 0;
}