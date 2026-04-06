#include <bits/stdc++.h>
using namespace std;

#define ll long long


int main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL);
    
    int n;
    cin >> n;

    vector<ll> pts(100001,0);

    for (int i = 0; i< n; i++) {
        int x;
        cin >> x;
        pts[x] += x;
    }

    ll prev2 = 0, prev1 = pts[1];
    for (int i = 2; i <= 100000; i++) {
        ll curr = max(prev1, prev2 + pts[i]);
        prev2 = prev1;
        prev1 = curr;
    }

    cout << prev1 << "\n";

    return 0;
}
