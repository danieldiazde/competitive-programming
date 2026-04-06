#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int w;
    cin >> w;
    // Both parts must be even and >= 2, so w must be even and > 2
    if (w > 2 && w % 2 == 0)
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}
