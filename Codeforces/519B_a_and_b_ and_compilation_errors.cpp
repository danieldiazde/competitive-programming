#include <bits/stdc++.h>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n; 

    cin >> n;
    cin.ignore();

    vector<long long> a(n), b(n - 1), c(n - 2);

    for (int i = 0; i < n;  i++) cin >> a[i];
    for (int i = 0; i < n - 1;  i++) cin >> b[i];
    for (int i = 0; i < n - 2; i++) cin >> c[i];

    long long sum1 = reduce(a.begin(), a.end(), 0);
    long long sum2 = reduce(b.begin(), b.end(), 0);
    long long sum3 = reduce(c.begin(), c.end(), 0);
    
    cout << sum1 - sum2 << "\n" << sum2 - sum3;

    return 0;
}