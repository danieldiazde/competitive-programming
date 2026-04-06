#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<string> v(n);
    for (string& s : v) cin >> s;

    int groups = 1;
    for (int i = 1; i < n; i++)
        if (v[i] != v[i - 1]) groups++;

    cout << groups << "\n";
    return 0;
}
