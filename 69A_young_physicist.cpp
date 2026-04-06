#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int x = 0, y = 0, z = 0;
    while (n--) {
        int a, b, c;
        cin >> a >> b >> c;
        x += a; y += b; z += c;
    }
    cout << (x == 0 && y == 0 && z == 0 ? "YES" : "NO") << "\n";
    return 0;
}
