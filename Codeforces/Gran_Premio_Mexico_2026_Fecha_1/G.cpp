#include <bits/stdc++.h>
using namespace std;

#define nl "\n"
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);

    int N;
    cin >> N;

    vector<bool> seen(N + 1, false);
    int ans = 0;

    //Nice to do retrieval with indexes
    for (int i = 0; i < N; ++i) {
        int x; cin >> x;
        if (seen[x]) ans++;
        else seen[x] = true;
    }

    cout << ans << nl;
    return 0;
}