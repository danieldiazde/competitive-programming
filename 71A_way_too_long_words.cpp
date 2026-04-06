#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    while (n--) {
        string s;
        cin >> s;
        if ((int)s.size() > 10)
            cout << s[0] << (int)(s.size() - 2) << s.back() << "\n";
        else
            cout << s << "\n";
    }
    return 0;
}
