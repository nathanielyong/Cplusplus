#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

int main(){
    int y;
    cin>>y;
 
    while(++y){
        string str=to_string(y);
        sort(str.begin(),str.end());
        set<char> s(str.begin(),str.end());
        if (str==string(s.begin(),s.end())){
            cout << y;
            break;
        }
    }

    return 0;
}