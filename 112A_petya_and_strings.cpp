#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s, t;
    cin >> s >> t;

    for (int i = 0; i < (int)s.size(); i++) {
        int a = tolower(s[i]);
        int b = tolower(t[i]);
        if (a < b) { cout << -1 << "\n"; return 0; }
        if (a > b) { cout <<  1 << "\n"; return 0; }
    }
    cout << 0 << "\n";
    return 0;
}
