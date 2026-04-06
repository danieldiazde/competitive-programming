#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    set<char> unique_chars(s.begin(), s.end());
    cout << (unique_chars.size() % 2 == 0 ? "CHAT WITH HER!" : "IGNORE HIM!") << "\n";
    return 0;
}
