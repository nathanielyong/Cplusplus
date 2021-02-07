#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>

using namespace std;

char isAnagram(map<char, int> m1, map<char, int> m2) {
    for (char c = 'a'; c <= 'z'; c++) {
        if (m1[c] < m2[c] && m1['*'] > 0) {
            while(m1[c] != m2[c] && m1['*'] > 0) {
                m1[c]++;
                m1['*']--;
            }
        } else if (m2[c] < m1[c] && m2['*'] > 0) {
            while(m2[c] != m1[c] && m2['*'] > 0) {
                m2[c]++;
                m2['*']--;
            }
        } 
        if (m1[c] == m2[c]) {
            continue;
        }
        return 'N';
    }
    if (m1['*'] == m2['*']) 
        return 'A';
    return 'N';
}
 
int main() {
    string s1, s2;
    map<char, int> m1, m2;
    cin >> s1 >> s2;

    for (char c: s1) {
        m1[c]++;
    }
    for (char c: s2) {
        m2[c]++;
    }
    cout << isAnagram(m1, m2);
    return 0;
}
