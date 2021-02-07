#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int tests, n;
    cin >> tests;
    while (tests--)
    {
        string s;
        cin>>s;
        n=s.length();
        if(n>10){
            s.replace(s.begin()+1,s.end()-1,to_string(n-2));
        }
        cout<<s<<"\n";
    }
    return 0;
}