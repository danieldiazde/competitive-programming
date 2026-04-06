#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    // Caps Lock was on if: first char is lowercase AND rest are uppercase,
    // OR all chars are uppercase.
    bool first_lower = islower(s[0]);
    bool rest_upper = true;
    for (int i = 1; i < (int)s.size(); i++)
        if (!isupper(s[i])) { rest_upper = false; break; }

    bool all_upper = isupper(s[0]) && rest_upper;

    if (first_lower && rest_upper) {
        // flip all
        s[0] = toupper(s[0]);
        for (int i = 1; i < (int)s.size(); i++) s[i] = tolower(s[i]);
    } else if (all_upper) {
        for (char& c : s) c = tolower(c);
    }

    cout << s << "\n";
    return 0;
}
