#include <bits/stdc++.h>
using namespace std;

int main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    vector<int> cuts {a,b,c};

    vector<int> dp(n + 1, INT_MIN);
    dp[0] = 0;

    for (int i = 1; i <= n; i++) {
        for (int cut: cuts) {
            if (i - cut >= 0 && dp[i - cut] != INT_MIN) {
                dp[i] = max(dp[i], dp[i - cut] + 1)
                //If it fails, either would produce and INT_MIN
            }
        }
    }

    cout << dp[n] << "\n";


    return 0;
}