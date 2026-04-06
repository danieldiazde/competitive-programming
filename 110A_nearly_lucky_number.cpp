#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string n;
    cin >> n;
    // Lucky digits are 4 and 7. Count them.
    int count = 0;
    for (char c : n)
        if (c == '4' || c == '7') count++;

    // Check if count itself is a lucky number
    string sc = to_string(count);
    bool lucky = true;
    for (char c : sc)
        if (c != '4' && c != '7') { lucky = false; break; }

    cout << (lucky ? "YES" : "NO") << "\n";
    return 0;
}
