#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s, k, n;
    cin >> s >> k >> n;

    // Combine k + n and check if it's an anagram of s
    string combined = k + n;
    sort(s.begin(), s.end());
    sort(combined.begin(), combined.end());
    cout << (s == combined ? "YES" : "NO") << "\n";
    return 0;
}
