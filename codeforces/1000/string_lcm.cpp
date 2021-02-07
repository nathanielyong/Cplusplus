#include <iostream>
using namespace std;

int gcd(int a, int b) {
    if (a == 0) 
        return b;
    return gcd(b % a, a);
}
int lcm(int a, int b) {
    return a*b/gcd(a, b);
}

int main() {
    int tests;
    string s, t;
    cin >> tests;
    while (tests--) {
        cin >> s >> t;
        int len1 = s.length(), len2 = t.length();
        int length = lcm(len1, len2);
        string s1, s2;
        for (int i = 0; i < length/len1; ++i) {
            s1 += s;
        }
        for (int i = 0; i < length/len2; ++i) {
            s2 += t;
        }
        if (s1 == s2) 
            cout << s1 << "\n";
        else
            cout << "-1\n";
    }

    return 0;
}