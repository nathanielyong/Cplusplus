#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int tests, n;
    int h, w;
    cin >> tests;
    for (int t = 0; t < tests; ++t)
    {
        cin>>n;
        vector<pair<int,int>>v(n);
        for(int i=0;i<n;++i){
            cin>>v[i].first>>v[i].second;
        }
        for(int i=0;i<n;++i){
            for(int j=0;j<n;++j){
                if(v[i].first>v[j].second&&v[i].second>v[j].first){
                    cout<<i+1<<" ";
                    break;
                }
            }
        }
        cout<<"\n";
    }

    return 0;
}