#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define nl "\n"

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> columns(n);

        for (int i = 0; i < n; ++i) {
            cin >> columns[i];
        }

        bool possible = true;
        for (int i = 1; i < n; ++i) {
            if ((columns[i] - columns[i - 1]) % 2 != 0) possible = false;
        }

        if (possible) {
            cout << "YES" << nl;
        }
        else {
            cout << "NO" << nl;
        }
    }

    return 0;
}