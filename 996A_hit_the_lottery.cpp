#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int bills[] = {100, 20, 10, 5, 1};
    int count = 0;
    for (int b : bills) {
        count += n / b;
        n %= b;
    }
    cout << count << "\n";
    return 0;
}
