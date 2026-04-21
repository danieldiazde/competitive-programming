#include <bits/stdc++.h>
using namespace std;

#define nl "\n"
#define ll long long

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M;

    cin >> N >> M;

    int prices = 0;
    for (int i = 0; i< N; ++i) {
        int x;
        cin >> x;
        prices +=x;
    }
    int paid = 0;
    for (int i = 0; i<M; ++i) {
        int c;
        cin >> c;
        paid += c;
    }

    if (paid >= prices + (prices + 10 - 1) / 10 )  cout << "YES" << nl;
    else {
        cout << "NO" << nl;
    }
    


    return 0;
}

