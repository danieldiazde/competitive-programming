#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    int base = m / n, extra = m % n;
    int pos = 1;
    for (int i = 0; i < n; i++) {
        int pieces = base + (i < extra ? 1 : 0);
        cout << pos << "\n";  
        pos += pieces;
    }
    return 0;
}
