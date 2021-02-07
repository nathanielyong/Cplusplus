#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int tests, n;
    cin >> tests;
    for (int t = 0; t < tests; ++t)
    {
        cin >> n;
        vector<int> v;
        for (int i = 0; i < n; ++i)
        {
            int a;
            cin >> a;
            v.push_back(a);
        }
        int best_score = 0;
        for (int i = 0; i < n; ++i)
        {

            int score = 0;
            int curr_idx = i;
            while (curr_idx < n)
            {
                int prev=v[curr_idx];
                v[curr_idx]=0;
                if(prev!=0){
                    
                    score += prev;
                    curr_idx += prev;
                    
                } else 
                    break;
            } 
            best_score = max(best_score, score);
        }
        cout << best_score << endl;
    }

    return 0;
}