#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, s;
    cin >> n >> s;
    vector<pair<int,int>> dragons(n);
    for (auto& [str, bonus] : dragons) cin >> str >> bonus;
    sort(dragons.begin(), dragons.end());

    for (auto& [str, bonus] : dragons) {
        if (s <= str) { cout << "NO\n"; return 0; }
        s += bonus;
    }
    cout << "YES\n";
    return 0;
}
