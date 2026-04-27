#include <bits/stdc++.h>

using ll long long;
using namespace std;
#define nl "\n"

// Given an array
vector<int> arr = {1,2,3,4,5,6,7,8,9,10}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);

    //We can use prefix sum and prefix mulitplication in formula in 1Dimension
    // P(a, b) = P(b) - P(a - 1)
    // P(i) = P( i - 1) + arr[i]


    // We can use prefix sum in 2 dimensions

    // P(r1, c1 to r2, c2) = P[r2][c2] - P[r1 - c1][c2] - P[r2][c1 - 1] + 

    
    
    return 0;
}