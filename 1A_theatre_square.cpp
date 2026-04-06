#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n, m, a;
    cin >> n >> m >> a;
    // Ceiling division: ceil(n/a) * ceil(m/a)
    long long rows = (n + a - 1) / a;
    long long cols = (m + a - 1) / a;
    cout << rows * cols << "\n";
    return 0;
}
