#include <bits/stdc++.h>


#define ll long long
#define nl "\n"


using namespace std;

int n, m;

int main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL);

    cin >> n >> m;

    //Every pair of neighbours is coprime

    //Two numbers are coprime if gcd(a,b) = 1
    //Euler's totient function counts the positive integer up to a number n that are relatively prime (co-prime) with n

    // We need to find for a fix number v, the number of coprimes from [1, M] that are coprime with v

    //n is the length of the list, m is the maximum possible value

    //We dan travel from v to u if gcd(v,u) == 1. We count how many ways we can go from v to u

    //From 1 to m i need to add the possible ways i could have gotten there

    return 0;
}