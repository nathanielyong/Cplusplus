#include <iostream>
#include <vector>

using namespace std;

int gcf(int a, int b){
    if(a==0){
        return b;
    }
    return gcf(b%a, a);
}

int lcm(int a, int b){
    return (a*b)/gcf(a, b);
}


int main(){
    vector<int>a={2, 3};
    int x=a[0];
    for(int i=1;i<a.size();++i){
        x=lcm(x,a[i]);
    }
    cout << x;

    return 0;
}