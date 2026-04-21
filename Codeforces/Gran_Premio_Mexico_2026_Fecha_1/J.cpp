#include <bits/stdc++.h>
using namespace std;

#define nl "\n"
using ll =  long long;
const ll MOD = 1'000'000'007;

/* 
Wrong approach, this overflows in memory
ll factorial(int n) {
    if (n == 0) return 1ll;
    ll result = 1;
    for (int i = n; i > 1; i--) {
        result*= i;
    }
    return result;
}
 */

ll get_configuration(int N) {

    ll evens = N / 2;
    ll odds = N - evens;

    /*Wrong approach, overflows memory
    // To choose 3 evens, we do evens chooose 3
    ll evens_choosing = factorial(evens) / (factorial(evens - 3) * factorial(3));

    // To choose two odds and 1 pair, we do odds choose 2 * 1 choose 1
    ll odds_chossing = factorial(odds) / (factorial(odds - 2) * factorial(2)) * 1;

    */
   // We know that k is always 3, so k factorial is actually 6, also (n - k) is always (n-3) or (n - 2), so we just need to calculato n up to n - k, other cancells

   ll choose_evens = evens * (evens - 1) * (evens - 2) / 6;
   ll choose_odds = (odds * (odds - 1) / 2) * evens; //In here we multiply times evens because we choose one even for each pair



   return (choose_evens + choose_odds) % MOD;
}

int main() {

    ios_base::sync_with_stdio(false); cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;
        //We count triples from 1 to N such that a+b+c is even, so can only be PPP or PPI regardless of order

        //Brute Force

        /*
        ll count = 0;
        for (int a = 1; a <= N; ++a) {
            for (int b = a + 1; b<=N; ++b) {
                for (int c = b + 1; c<=N; ++c) {
                    if (a+b+c % 2 == 0) count++;
                }
            }
        }
        */

        // Time complexity Of N^3 / 6

        cout << get_configuration(N) << nl;
    }


    return 0;
}