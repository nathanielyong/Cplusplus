#include <iostream>
#include <vector> 
#include <numeric>
#include <functional>


using namespace std;

int main(){
    vector<int>v;
    int n, a;
    cin >> n;
    for (int i=0;i<n;++i){
        cin >> a;
        if (a==0) {
            v.pop_back();
        } else {
            v.push_back(a);
        }
    }
    int sum = accumulate(v.begin(), v.end(), 0);
    cout << sum;
    return 0;
}