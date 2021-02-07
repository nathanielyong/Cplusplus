#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <climits>

using namespace std;

int main()
{
    int tests;
    cin >> tests;
    vector<char>answers;
    for (int t = 0; t < tests; ++t)
    {
        int n, a;
        cin >> n;
        stack<int> mount;
        stack<int> branch;
        vector<int> lake={0};
        branch.push(INT_MAX);
        for (int i = 0; i < n; ++i)
        {
            cin >> a;
            mount.push(a);
        }
        while (!mount.empty())
        {
            if (mount.top() == lake.back() + 1)
            {
                lake.push_back(mount.top());
                mount.pop();
            }
            else if (mount.top() < branch.top())
            {
                branch.push(mount.top());
                mount.pop();
            }
            else if (branch.top() == lake.back() + 1)
            {
                lake.push_back(branch.top());
                branch.pop();
            }
            else
            {
                answers.push_back('N');
                break;
            }
        }
        if(answers.size()==t){
            answers.push_back('Y');
        }
    }
    for (char answer: answers){
        cout << answer << "\n";
    }
    return 0;
}