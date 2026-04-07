#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t;
    cin >> t;

    vector<int> options {2020, 2021};
    vector<int> numbers(t);
    int max_n = 0;

    for (int i = 0; i < t ; i++) {
        cin >> numbers[i];
        if (max_n < numbers[i]) {
            max_n = numbers[i];
        }
    }

    vector<bool> dp(max_n + 1, false);
    dp[0] = true;

    for (int i = 1; i<=max_n; i++) {
        for (int option: options) {
            if (i-option >= 0 && dp[i - option] == true ) {
                dp[i] = true;
            }
        }
    }

    for (int i = 0; i<t; i++) {
        if (dp[numbers[i]] == true) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }

    }

    return 0;
}