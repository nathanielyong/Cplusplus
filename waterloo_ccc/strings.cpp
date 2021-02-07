#include <iostream>
#include <unordered_set>
#include <cstring>
using namespace std;

int n_freq[26];
int h_freq[26];
string n, h;

bool is_perm() {
    for (int i = 0; i < n.size(); ++i) 
        if (n_freq[n[i] - 'a'] != h_freq[n[i] - 'a'])
            return false;
    return true;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    memset(n_freq, 0, sizeof(n_freq));
    memset(h_freq, 0, sizeof(h_freq));

    cin >> n >> h;
    unordered_set<string> used;
    int len = n.size();
    
    string h_substr = h.substr(0, len);
    for (int i = 0; i < len; ++i) {
        n_freq[n[i] - 'a']++;
        h_freq[h[i] - 'a']++;
    }
    if (is_perm())
        used.insert(h_substr);

    for (int i = 1; i < h.size() - len + 1; ++i) {
        h_substr = h.substr(i, len);
        h_freq[h[i - 1] - 'a']--;
        h_freq[h[i + len - 1] - 'a']++;
        if (is_perm())
            used.insert(h_substr);   
    }    
    cout << used.size();
    return 0;
}