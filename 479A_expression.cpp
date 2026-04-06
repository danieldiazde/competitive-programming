#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c;
    cin >> a >> b >> c;
    // Always true: (a + b) * c == a*c + b*c
    // Just print the identity
    cout << "(" << a << "+" << b << ")" << "*" << c
         << "=" << a << "*" << c << "+" << b << "*" << c << "\n";
    return 0;
}
