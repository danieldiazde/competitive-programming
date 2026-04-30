#include <bits/stdc++.h>

#define nl "\n"
using ll = long long;

using namespace std;


int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> arr(n);
    //We need to maximize the subsequence, which means popping as little numbers as possible

    vector<vector<int>> needed(n + 1);

    for (int i = 0; i< n; ++i) {
        cin >> arr[i]; 
    }



    return 0;
}